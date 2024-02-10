//Desorting
//https://codeforces.com/contest/1853/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n,gap = INT_MAX; bool flag = false;
        cin>>n;
        int prev ; cin>>prev;
        for(int i=1;i<n;i++){
            int x; cin>>x;
            if(x<prev) flag = true;
            else gap = min(gap,x-prev);
            prev = x;
        }
        if(!flag) cout<<(gap/2)+1<<endl;
        else cout<<0<<endl;
    }
        
}
