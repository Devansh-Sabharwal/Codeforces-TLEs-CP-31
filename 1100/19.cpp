//https://codeforces.com/problemset/problem/1791/E
//Negatives and Positives
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
		ll n;
        cin>>n;
        vl v(n);ll sum = 0;
        int count = 0;
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0) count++,neg.pb(v[i]);
            else pos.pb(v[i]);
        }
        if(count%2==0){
            for(auto x: v){
                sum+=abs(x);
            }
        }
        else{
            srt(neg);
            srt(pos);
            int i=0;
            while(count>1){
                sum+=abs(neg[i]);
                count--;
                i++;
            }
            if(pos.size()){
                if(pos[0]<abs(neg.back())){
                    sum+=abs(neg.back());
                    sum-=pos[0];
                    for(int i=1;i<pos.size();i++) sum+=pos[i];
                }
                else{
                     sum+=neg.back();
                     for(auto x: pos) sum+=x;
                }
            }
            else sum+=neg.back();
        }
        cout<<sum<<endl;
	}
}
