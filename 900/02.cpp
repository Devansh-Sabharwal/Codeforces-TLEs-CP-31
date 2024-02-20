//Chemistry
//https://codeforces.com/problemset/problem/1883/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(auto x: s){
            mp[x]++;
        }
        int odd = 0;
        for(auto x: mp){
            int a = x.second;
            if(a%2) odd++;
        }
        if(odd>k+1) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }    
}

