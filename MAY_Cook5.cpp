#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		map<long long,long long> mp[k];
		for(long long i=0;i<n;i++){
			long long num;
			cin>>num;
			mp[i%k][num]++;
		}	
		long long ans=0;
		for(long long i=0;i<k;i++){
			long long total=0,maxx=-1;
			for(auto [num,count] : map[i]){
				total+=cnt;
				maxx=max(maxx,cnt);
			}
			ans+=total-max;
		}
		cout<<ans<<"\n";
	}
}
