//We Need the Zero
//https://codeforces.com/contest/1805/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        ans = ans^x;
    }
    if(n%2) return ans;
    else if(ans==0) return 0;
    else return -1;
}
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n; cin>>n;
        cout<<solve(n);
        cout<<endl;
    }    
}

