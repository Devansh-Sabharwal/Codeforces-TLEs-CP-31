//Extremely Round
//https://codeforces.com/problemset/problem/1776/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n; cin>>n;
        int digits = 0, ld;
        while(n>0){
            ld = n%10;
            n/=10;
            digits++;
        }
        cout<<(ld+(digits-1)*9);
        cout<<endl;
    }    
}

