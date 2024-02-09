//https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
