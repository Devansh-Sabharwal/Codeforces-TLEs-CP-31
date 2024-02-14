//Coins
//https://codeforces.com/contest/1814/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(ll n,ll k){
        if(n%2==0 or n%k==0) return true;
        else if(n%2 and k%2) return true;
        else return false;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        ll n,k;
        cin>>n>>k;
        cout<<(solve(n,k)?"YES":"NO");
        cout<<endl;
    }    
}
