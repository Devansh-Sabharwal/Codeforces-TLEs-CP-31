//https://codeforces.com/problemset/problem/1826/B
//Lunatic Never Content
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define pp pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
#define sort(v) sort(v.begin(),v.end())
vector<int> read(int n){
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	return arr;
}
bool pal(vector<int> &v){
    int i=0,j=v.size()-1;
    while(i<=j){
        if(v[i]!=v[j]) return false;
        i++,j--;
    }
    return true;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
		int n;
        cin>>n;
        vector<int> v = read(n);
        int ans = 1;
        int i=0,j=n-1,a = abs(v[0]-v.back());
        while(i<=j){
            int x = abs(v[i]-v[j]);
            a = gcd(x,a);
            i++,j--;
        }
        cout<<a<<endl;

	}
}// 4 15 1 2 0 10
//6,15,0
//4%k = 10%k 6
//15%k = 0%k 15
