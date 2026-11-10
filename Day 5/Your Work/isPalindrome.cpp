#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    string s2 = s;
    reverse(s2.begin(), s2.end());

    if(s == s2)  cout << "The string is a palindrome.\n";
    else   cout << "The string is Not a palindrome.\n";

    return 0;
}