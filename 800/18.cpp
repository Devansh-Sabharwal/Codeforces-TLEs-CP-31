//Grasshopper on a Line
//https://codeforces.com/contest/1837/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int x,k;
        cin>>x>>k;
        if(x%k){
            cout<<1<<endl<<x;
        }
        else{
            cout<<2<<endl;
            cout<<x-(k+1)<<" "<<k+1;
        }
        cout<<endl;
    }
        
}
