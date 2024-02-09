//https://codeforces.com/problemset/problem/1862/B
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n;
        cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> a; a.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]) a.push_back(arr[i]);
            a.push_back(arr[i]);
        }
        cout<<a.size()<<endl;
        for(auto x: a) cout<<x<<" ";
        cout<<endl;
    }
}
