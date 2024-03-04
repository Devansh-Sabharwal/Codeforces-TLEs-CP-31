//https://codeforces.com/contest/1665/problem/B
//Array Cloning Technique
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(int s, int e){
    int count = 0;
    while(s<e and s!=e){
        s*=2;
        count++;
    }
    return count;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;cin>>n;int arr[n];
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }int maxfreq = 0 ;
        for(auto x: mp){
            if(x.second>maxfreq) maxfreq = x.second;
        }
        int swaps = n-maxfreq;
        int copies = solve(maxfreq,n);
        cout<<swaps+copies<<endl;
    }
}
