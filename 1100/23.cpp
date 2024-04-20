//https://codeforces.com/problemset/problem/1708/B
//Difference of GCDs
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i]
#define pb(x) push_back(x)
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define pp pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define rev(v) reverse(v.begin(),v.end())
#define ump unordered_map

int solve(){
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		ll n,l,r;
        cin>>n>>l>>r;
        vl arr(n+1);
        bool flag = true;
        for(int i=1;i<=n;i++){
            if(l%i==0) arr[i]=l;
            else{
                ll x = l%i;
                if((l+i-x)>r) {
                    flag = false;
                    break;
                }
                else if((l+i-x)<=r){
                    arr[i] = l+i-x;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
	}
}
