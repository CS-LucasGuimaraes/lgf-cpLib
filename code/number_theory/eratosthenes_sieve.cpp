#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> prime_list;

void EratosthenesSieve(ll n) {
    vector<bool> prime(n + 1, true);
 
    for (ll p = 2; p <= n; p++) {
        if (prime[p] == true) {
            prime_list.push_back(p);

            for (ll i = p; i <= n; i += p)
                prime[i] = false;
        }
    }
}