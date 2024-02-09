//https://codeforces.com/problemset/problem/1881/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,k; string x,s;
        cin>>n>>m;
        cin>>x>>s;
        for(k = 0;k<6;k++) {
            if(x.find(s) != -1){
                cout<<k<<endl; 
                break;
            }
            x+=x;
        }
        if(k==6) cout<<-1<<endl;
    }
}
