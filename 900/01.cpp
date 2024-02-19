//Forked
//https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int a,b;
        cin>>a>>b;
        int xk ,yk ,xq,yq;
        cin>>xk>>yk>>xq>>yq;
        int ans = 0;
        set<pair<int,int>> s,t;
        for(auto x: {a,-a}){
            for(auto y:{b,-b}){
                s.insert({xk+x,yk+y});
                s.insert({xk+y,yk+x});
                t.insert({xq+x,yq+y});
                t.insert({xq+y,yq+x});
            }
        }
        for(auto x:s){
            if(t.find(x)!=t.end()) ans++;
        }
        cout<<ans<<endl;
    }    
}

