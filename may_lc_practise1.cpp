#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int n,q,x;
	while(t--){
		cin>>n>>q;
		vector<int> v;
		int dist=0;
		cin>>x;
			v.push_back(x);
		for(int i=1;i<n;i++){
			cin>>x;
			v.push_back(x);
			dist+=(v[i]==v[i-1])?2:1;
			cout<<dist<<endl;
		}
		while(q--){
			cin>>x;
			x--;
			dist-=(v[x]==v[x-1])?2:1;
			dist-=(v[x+1]==v[x])?2:1;
			cout<<dist<<endl;
			v[x]=~v[x];
			dist+=(v[x]==v[x-1])?2:1;
			cout<<dist<<endl;
			dist+=(v[x+1]==v[x])?2:1;
			cout<<dist<<endl;
		}
	}
}
