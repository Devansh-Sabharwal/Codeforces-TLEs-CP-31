//One and Two
//https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int arr[],int n,int twos){
    int x = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==2) x++, twos--;
        if(twos==x) return i+1;
    }
    return -1;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n; cin>>n;
        int arr[n];
        int twos =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2) twos++;
        }
        cout<<solve(arr,n,twos);
        cout<<endl;
    }    
}

