//Forbidden Integer
//https://codeforces.com/contest/1845/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int tc;
     cin>>tc;
     while(tc--){
        int n,k,x;
        cin>>n>>k>>x;
        if(n%2!=0){
            if(x!=1){
                cout<<"YES"<<endl<<n<<endl;
                while(n-->0) cout<<1<<" ";
            }
            else if(k>2){
                cout<<"YES"<<endl;
                int m = (n-3)/2+1;
                cout<<m<<endl;
                cout<<3<<" ";
                for(int i=1;i<=m-1;i++) cout<<2<<" ";
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(x!=1){
                cout<<"YES"<<endl<<n<<endl;
                while(n-->0) cout<<1<<" ";
            }
            else if(x!=2 and k>=2){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++) cout<<2<<" ";
            }
            else cout<<"NO"<<endl;
        }
        cout<<endl;
    }
        
}
