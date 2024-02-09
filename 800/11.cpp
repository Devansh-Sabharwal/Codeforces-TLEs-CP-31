https://codeforces.com/problemset/problem/1866/A//
#include <bits/stdc++.h>
using namespace std;
int main() {
    // int tc; 
    // cin>>tc;
    // while(tc--){
        int n;
        cin>>n;
        int mini = INT_MAX , maxi=INT_MIN+1;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x<0) maxi = max(maxi,x);
            else mini = min(mini,x);
        }
        cout<<min(abs(maxi),mini)<<endl;
   // }
}
