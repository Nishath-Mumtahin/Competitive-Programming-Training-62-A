#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++)  cin >> a[i];

    sort(a.begin(), a.end());
    int left = 0, right = n-1;
    bool found = false;
    
    while(left < right){
        long long curr_sum = a[left] + a[right];

        if(curr_sum == t){
            cout << "Found: " << a[left] << " " << a[right];
            found = true;
            break;
        }
        else if (curr_sum < t) left++;
        else  right--;     
    }

    if(!found)  cout << "Not Found\n";
  
    return 0;
}