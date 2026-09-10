#include<bits/stdc++.h>
using namespace std;
int main () {
    long long int n;
    cin >> n;

    long long int sum = n*(n+1);
    sum = sum / 2;
    long long rest = 0;

    long long int a[n];
    for (int i = 1; i <= n-1; i++)
    {
        cin >> a[i];
        rest += a[i];
    }
    
    cout << sum - rest << endl;
    
    return 0;
}