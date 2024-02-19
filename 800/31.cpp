//Two Permutations
//https://codeforces.com/problemset/problem/1761/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int a,b,n; cin>>n>>a>>b;
        if(n==a and n==b) cout<<"Yes"<<endl;
        else{
            if(n-a-b>1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }    
}

