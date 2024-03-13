//https://codeforces.com/problemset/problem/1859/B
//Olya and Game with Arrays
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
        int k = n;
        vector<int> res;int mini = INT_MAX;
        while(n--){
            int m;
            cin>>m;
            vector<int> temp(m);
            int fmin = INT_MAX,smin = INT_MAX;
            for(int i=0;i<m;i++){
                cin>>temp[i];
                if(fmin>temp[i]){
                    smin = fmin;
                    fmin = temp[i];
                }
                else if(smin>temp[i]){
                    smin = temp[i];
                }
            }
            mini = min(mini,fmin);
            res.push_back(smin);
        }
        sort(res.begin(),res.end());
        ll sum = 0;
        sum+=mini;
        int i = res.size()-1;
        int cnt = 0;
        while(cnt++<k-1){
            sum+=res[i--];
        }
        cout<<sum<<endl;
	}
}
