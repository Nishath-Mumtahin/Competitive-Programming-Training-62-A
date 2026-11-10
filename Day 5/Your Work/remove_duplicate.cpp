#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
      
    if(n == 0)   return 0;
    int slow = 0;

    for (int fast = 1; fast < n; fast++)
    {
        if(a[fast] != a[slow]) {
            slow++;
            a[slow] = a[fast];
        }
    }
    int unique = slow+1;

    cout << unique << "\n";
    for (int i = 0; i < unique; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}