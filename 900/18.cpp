//https://codeforces.com/problemset/problem/1624/B
//Make AP
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
        int a,b,c;
        cin>>a>>b>>c;
        int d1 = b-a, d2 = c-b;
        if(d1==d2) {
            cout<<"YES"<<endl;
            continue;
        }
        // middle
        int d = (c-a)/2;
        int x = a+d;
        if(x%b==0 and (c-a)%2==0 and x!=0 and x>=b){
            cout<<"YES"<<endl;
            continue;
        }
        //last
        d = b-a;
        x = b+d;
        if(x%c==0 and x!=0 and x>=c){
            cout<<"YES"<<endl;
            continue;
        }
        //first
        d = c-b;
        x = b-d;
        if(x%a==0 and x!=0 and x>=a){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
	}
}
