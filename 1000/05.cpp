//https://codeforces.com/problemset/problem/1849/B
//Monsters
class cmp{
public: 
     bool operator()(pair<int,int> &p1,pair<int,int>&p2){
        int a = p1.first, b = p1.second;
        int c = p2.first, d = p2.second;
        if(a!=c) return a>c;
        else return b<d;
        }
};
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        vector<pair<int,int> > p;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<k);
            else if(arr[i]%k==0) arr[i] = k;
            else arr[i]%=k;
            p.push_back({arr[i],i});
        } 
        debug(p);
        sort(p.begin(),p.end(),cmp());
        for(auto c: p) cout<<c.second+1<<" ";
        cout<<endl;        
	}
}
