//https://codeforces.com/contest/1883/problem/C
//Raspberries
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
        debug(tc);
        int n,k;
        cin>>n>>k;
        int mini = INT_MAX, op;
        int eve = 0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%2==0) eve++;
            if(x%k==0){debug(i);mini = 0;}
            int a = x/k;
            op = (a+1)*k-x;
            mini = min(op,mini);
            debug(mini);
        }
        if(k==4){
            if(eve==1) mini = mini = min(1,mini);
            else if(eve>=2) mini = min(0,mini);
            mini = min(2,mini);
        }
        cout<<mini<<endl;
	}
}
