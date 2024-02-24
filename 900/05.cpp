//Make It Zero
//https://codeforces.com/problemset/problem/1869/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n; cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
	}
}
