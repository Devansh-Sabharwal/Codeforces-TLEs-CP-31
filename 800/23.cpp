//Walking Master
//https://codeforces.com/contest/1806/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int a,int b, int c, int d){
       if(b>d) return -1;
       int up = d-b;
       int new_a = a+up;
       if(new_a<c) return -1;
       int left = new_a-c;
       return up+left;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<solve(a,b,c,d);
        cout<<endl;
    }    
}

