//https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n , x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int maxdis = arr[0]; int dis = arr[0];
        for(int i=1;i<n;i++){
            dis = arr[i-1];
            maxdis = max(maxdis,arr[i]-dis);
        }
        cout<<max(maxdis,2*(x-arr[n-1]))<<endl;
    }
}
