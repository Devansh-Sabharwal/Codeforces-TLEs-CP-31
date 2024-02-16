//Prepend and Append
//https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(string s){
    if(s.size()==1) return 1;
    int i=0, j=s.size()-1;
    while(i<=j){
        if(s[i]==s[j]) return j-i+1;
        else i++,j--;
    }
    return 0;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n; cin>>n;
        string s; cin>>s;
        cout<<solve(s);
        cout<<endl;
    }    
}

