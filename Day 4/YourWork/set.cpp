#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        s.insert(val);
    }
    cout << s.size() << "\n";
    for (int x : s) {
    cout << x << " ";
    }
    cout << "\n";
    
    int t;
    cin >> t;

    if (s.count(t))  cout << "Yes\n";
    else  cout << "No\n";

    return 0;
}