//Buttons
//https://codeforces.com/problemset/problem/1858/A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0) a+=c/2+1,b+=c/2;
        else a+=c/2,b+=c/2;
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
        
    }
