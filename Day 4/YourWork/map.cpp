#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; i++){
        string word;
        cin >> word;
        mp[word]++;
    }
    
    for (auto x : mp) {
    cout << x.first << " : " << x.second << "\n";
    }
    cout << "\n";
    
    string t;
    cin >> t;

    cout << t << "query: " << mp[t];

    return 0;
}