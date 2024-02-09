//https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n,sum=0; 
        cin>>n;
        for(int i=0;i<n-1;i++){
            int x; cin>>x;
            sum+=x;
        }
        cout<<(0-sum)<<endl;
    }
}
