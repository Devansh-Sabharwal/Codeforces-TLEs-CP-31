//https://codeforces.com/problemset/problem/1418/A
//Buying Torches
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
        ll cost, coal, k;
        cin>>cost>>coal>>k;
        ll need = (coal*k)+k-1;
        ll ans = k;
        ll stick = 1;
        if(need%(cost-1)==0) ans+=need/(cost-1);
        else{
            ans+=(need/(cost-1))+1;
        }
        cout<<ans<<endl;
	}
}
