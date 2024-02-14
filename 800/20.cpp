//Twin Permutations
//https://codeforces.com/contest/1831/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        int arr[n]; int maxi = INT_MIN;
        for(int i=0;i<n;i++) cin>>arr[i],maxi = max(maxi,arr[i]);
        for(int i=0;i<n;i++){
            cout<<maxi-arr[i]<<" ";
        }
        cout<<endl;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        solve();
    }    
}
