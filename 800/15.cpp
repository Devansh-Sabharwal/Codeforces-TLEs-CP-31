//Array Coloring
//https://codeforces.com/problemset/problem/1857/A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n,odd=0; cin>>n;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x%2!=0) odd++;
        }
        if(odd%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
        
}
