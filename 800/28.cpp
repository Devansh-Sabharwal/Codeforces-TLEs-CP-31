// Make it Beautiful
//https://codeforces.com/problemset/problem/1783/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]) cout<<"No";
        else{
            cout<<"Yes"<<endl;
            cout<<arr[n-1]<<" ";
            for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
        }
 
        cout<<endl;
    }    
}
