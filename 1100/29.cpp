//https://codeforces.com/problemset/problem/1618/C
//Paint the Array
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
		ll n;cin>>n;
        vl arr(n);
        read(arr,n);
        ll i = 0,j=1;
        ll x=arr[0],y=arr[1];
        while(i<n){
            x=gcd(arr[i],x);
            i+=2;
        }
        while(j<n){
            y=gcd(arr[j],y);
            j+=2;
        }
        for(int i=0;i<n;i++){
            if(x!=0 and i%2==1 and arr[i]%x==0) x=0;
            if(y!=0 and i%2==0 and arr[i]%y==0) y=0;
        }
        if(!x and !y) cout<<0<<endl;
        else if(x) cout<<x<<endl;
        else cout<<y<<endl;
	}
}
