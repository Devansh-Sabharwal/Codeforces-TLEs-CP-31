//https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        unordered_map<int,int> m;
        for(auto x: arr) m[x]++;
        if(m.size()>2) cout<<"No"<<endl;
        else if(m.size()==1) cout<<"Yes"<<endl;
        else if(m.size()==2){
            vector<int> p;
            for(auto x: m) p.push_back(x.second);
            if(abs(p[0]-p[1])<=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
