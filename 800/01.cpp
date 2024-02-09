https://codeforces.com/contest/1903/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc; 
    while(tc--){
        int n , k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k==1 && !is_sorted(arr,arr+n)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
