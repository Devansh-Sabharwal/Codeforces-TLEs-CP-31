//https://codeforces.com/problemset/problem/1155/A
//Reverse a Substring

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int solve(){
}
int main() {
	int n;cin>>n;
    string s;
    cin>>s;
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            flag = false;
            break;
        }
    }
    if(flag) cout<<"NO"<<endl;
}
