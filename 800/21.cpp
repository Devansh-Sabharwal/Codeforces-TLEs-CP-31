//Blank Space
//https://codeforces.com/contest/1829/problem/B
#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        int arr[n]; int maxi =0;
        for(int i=0;i<n;i++){ cin>>arr[i];}
        int streak = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) streak++,maxi = max(streak,maxi);
            else streak = 0;
        }
        cout<<maxi<<endl;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        solve();
    }    
}
