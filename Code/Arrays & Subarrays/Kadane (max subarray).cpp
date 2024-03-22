#include <bits/stdc++.h>
using namespace std;

int Kadane(vector<int>& arr, int size)    // max contiguos subarray
{
    int max_sum = INT_MIN, current_sum = 0;    // Use max+sum = 0 to addmit empty subarrays 
 
    for (int i = 0; i < size; i++) {
        current_sum = current_sum + arr[i];
        if (max_sum < current_sum)
            max_sum = current_sum;
 
        if (current_sum < 0)
            current_sum = 0;
    }
    return max_sum;     // Use % MOD here if using MOD in the question.
}