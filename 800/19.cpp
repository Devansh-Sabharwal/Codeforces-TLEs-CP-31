//Unit Array
//https://codeforces.com/contest/1834/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n;
        cin>>n;
        int neg = 0, pos = 0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x==1) pos++;
            else neg++;
        }
        int sum = pos-neg, need = 0;
        if(sum<0) need = (abs(sum)+1)/2;
        neg-=need;
        cout<<need+(neg%2)<<endl;
    }    
}
