//https://codeforces.com/contest/1878/problem/A
#include <bits/stdc++.h>
using namespace std; 
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n , k;
        cin>>n>>k; bool flag = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x; 
            if(x==k){flag = true;}
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
