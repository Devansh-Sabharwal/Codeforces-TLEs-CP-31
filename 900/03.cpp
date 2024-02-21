//Vasilije in Cacak
//https://codeforces.com/problemset/problem/1878/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll sum = 0;
        ll mini = (k*(k+1))/2; //first k sum 
        ll maxi = (k*(2*n+1-k))/2; // last k sum
        if(x>=mini and x<=maxi) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }    
}
