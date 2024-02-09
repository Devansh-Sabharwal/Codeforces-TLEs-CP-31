//https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n ; string s;
        cin>>n>>s;
        int count = 0; bool flag = false;
        for(int i=0;i<n;i++){
            if(s[i]=='.') count++;
            if(i>0 and i<n-1){
                if(s[i-1]=='.' and s[i]=='.' and s[i+1]=='.') flag = true;
            }
        }
        if(flag) cout<<2<<endl;
        else cout<<count<<endl;
    }
}
