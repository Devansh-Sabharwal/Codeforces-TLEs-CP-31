//https://codeforces.com/contest/1567/problem/B
//MEXor Mixup
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll mex,x;
        cin>>mex>>x;
        ll c = 0;
        int g = mex%4;
        for(int i=mex-1;g>0;i--){
            c^=i;
            g--;
        }
        ll temp = c^x;
        ll ans = 0;
        if(c==x) ans = mex;
        else if((c==0 and mex==x) or temp == mex) {
            ans = mex+2;
        }
        else{ans = mex+1;}
        cout<<ans<<endl;
	}
}
//general rule
//     if (mex % 4 == 1) {c = a - 1;}
//     else if (mex % 4 == 2) {c = 1;}
//     else if (mex % 4 == 3) {c = a;}
//     else {c = 0;}
