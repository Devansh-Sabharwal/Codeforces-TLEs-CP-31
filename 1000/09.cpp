//https://codeforces.com/contest/1765/problem/M
//Minimum LCM
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
        int n;
        cin>>n;
        int a = 1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a = n/i;
                break;
            }
        }
        cout<<a<<" "<<n-a<<endl;
	}

}
