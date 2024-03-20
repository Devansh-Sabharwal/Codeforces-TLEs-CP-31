//https://codeforces.com/problemset/problem/1725/B
//Basketball Together
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <D:\CP\debug_Template.cpp>
#else
#define debug(...)
#define debugArr(...)
#endif
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int solve(){
}
int main() {
	int tc;
	//cin>>tc;
	//while(tc--){
        int n,d;
        cin>>n>>d;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int i=0,j=n-1; int ans = 0;
        while(i<=j){
            ll p = arr[j];
            ll need = d/p;
            if(need*p>d);
            else need++;
            i+=(need-1);
            if(i<=j) ans++;
            else break;
            j--;
        }
        cout<<ans<<endl;
	}//50 60 70 80 90 100

//}
