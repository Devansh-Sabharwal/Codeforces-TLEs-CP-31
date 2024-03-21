//https://codeforces.com/problemset/problem/1632/B
//Roof Construction
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <D:\CP\debug_Template.cpp>
#else
#define debug(...)
#define debugArr(...)
#endif
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int solve(){
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = log2(n-1), s= pow(2,k);
        for(int i = s-1; i>=0; i--) {cout<<i<<' ';}
        for(int i=s;i<n;i++){cout<<i<<' ';}
        cout<<'\n';
    }
}

