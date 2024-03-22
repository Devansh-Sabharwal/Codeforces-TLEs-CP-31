//https://codeforces.com/problemset/problem/1506/C
//Double-ended Strings
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
        string a,b;
        cin>>a>>b;
        if(a==b) {cout<<0<<endl;continue;}
        unordered_map<string,int> m1,m2;
        for(int i=0;i<a.size();i++){
            for(int len = 1;len<=a.size()-i;len++){
                string x = a.substr(i,len);
                m1[x] = i;
            }
        }
        int ans = a.size()+b.size(), maxi = 0;
        for(int i=0;i<b.size();i++){
            for(int len = 1;len<=b.size()-i;len++){
                string x = b.substr(i,len);
                if(m1.find(x)!=m1.end()){
                    int l = x.size();
                    if(l>maxi){
                        maxi = l;
                        ans = a.size()-len+b.size()-len;
                    }
                }
                m2[x] = i;
            }
        }
        cout<<ans<<endl;
	}
}

