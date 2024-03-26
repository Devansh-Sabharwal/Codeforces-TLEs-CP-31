//https://codeforces.com/problemset/problem/1899/C
//Yarik and Array
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int parity(int a, int b){
    if(a%2 and b%2) return false;
    if(a%2==0 and b%2==0) return false;
    return true;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n;
        cin>>n;
        int maxi = INT_MIN;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        maxi = max(arr[0],maxi);
        int curr = arr[0];
        for(int i=1;i<n;i++){
            if(parity(arr[i-1],arr[i])){
                curr = max(arr[i], curr+arr[i]);
                maxi = max(curr,maxi);
            }
            else{
                curr = arr[i];
                maxi = max(curr,maxi);
            }
        }
        cout<<maxi<<endl;
	}
}
