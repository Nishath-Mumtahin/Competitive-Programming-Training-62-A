#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)  cin >> a[i];

    if(k > n)  cout << "Invalid window size\n";
    long long curr_sum = 0, max_sum = 0;

    for (int i = 0; i < k; i++)
    {
        curr_sum += a[i];
    }
    max_sum = curr_sum;

    for(int i = k; i < n; i++) {
        curr_sum += a[i] - a[i - k]; 
        max_sum = max(max_sum, curr_sum);
    }

    cout << "Maximum sum of " << k << " sized sub-array is: " << max_sum << "\n";

    return 0;
}