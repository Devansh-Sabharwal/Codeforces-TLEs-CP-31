//Li Hua and Pattern
//https://codeforces.com/problemset/problem/1797/B
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
		int n,k;
        cin>>n>>k;
        vvi v;
        for(int i=0;i<n;i++){
            vi temp(n);
            read(temp,n);
            v.pb(temp);
        }
        int i=0, j=n-1;
        while(i<j){
            int id1 = 0, id2 = n-1;
            while(id1<n){
                if(v[i][id1]!=v[j][id2]) k--;
                id1++;id2--;
                if(k<0) break;
            }
            if(k<0) break;
            i++;
            j--;
        }
        if(n>1 and n%2==1){
            int row = n/2;
            int i=0,j=n-1;
            while(i<=j){
                if(v[row][i]!=v[row][j]) k--;
                i++;j--;
            }
        }
        if(k>=0 and k%2==0) cout<<"YES"<<endl;
        else if(k>=0 and n%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}
//1 1 1 0 0 0
//0 0 0 1 1 1
