#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = INT_MAX;
const int max_size = 2e5 + 5;
vector<ll> seg(4*max_size);
vector<ll> arr(max_size);
int n,q;

ll operation(ll a, ll b) {
    return a+b;
}

void build(int l = 0, int r = n-1, int index = 0){      // build()
	if(l == r){
		seg[index] = arr[l];
		return;
	}
	int mid = l + (r-l)/2;
	int left = 2*index + 1;
	int right = 2*index + 2;
	build(l,mid,left);
	build(mid+1,r,right);
	seg[index] = operation(seg[left], seg[right]);
}

ll query(int L, int R, int l = 0, int r = n-1, int index = 0){      // query(L-1, R-1)
	if(R < l || L > r) return 0; // Neutral element of the operation
	if(L <= l && r <= R) return seg[index];

	int mid = l + (r-l)/2;
	int left = 2*index + 1;
	int right = 2*index + 2;
	ll ql = query(L,R,l,mid,left);
	ll qr = query(L,R,mid+1,r,right);
	return operation(ql,qr); 
}

void update(int pos, int num, int l = 0, int r = n-1, int index = 0){       // update(pos-1, value)
	if(l == r){
		seg[index] = num;
		return;
	}
	int mid = l + (r-l)/2;
	int left = 2*index + 1;
	int right = 2*index + 2;
	if(pos <= mid){
		update(pos,num,l,mid,left);
	}
	else update(pos,num,mid+1,r,right);
	seg[index] = operation(seg[left],seg[right]);
}