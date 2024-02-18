//Everybody Likes Good Arrays!
//https://codeforces.com/problemset/problem/1777/A
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
            arr[i]%=2;
        }
        int op = 0;
        int streak = 1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                streak++;
            }
            else{
                op+=streak-1;
                streak = 1;
            }
        }
        op+=streak-1;
        cout<<op<<endl;
        cout<<endl;
    }    
}
