#include <bits/stdc++.h>
using namespace std;

int main() {
    
    pair<int, pair<string, double> > s;
    
    s = {23, {"Nishath", 3.95}};
    
    cout << "ID: " << s.first << endl;
    cout << "Name: " << s.second.first << endl;
    cout << "CGPA: " << s.second.second << endl;
    
    return 0;
}
