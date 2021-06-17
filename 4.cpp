#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long long int n,q;
	long long int pos,val;
	cin>>t;
	
	while(t--){
		cin>>n>>q;
		long long int a[n];
		for(long long int i=0;i<n;i++){
			cin>>a[i];
		}
		int dp[31]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<31;j++){
				long long int x=1<<j;
				if(a[i]&x){
					dp[j]+=1;
				}
			}
		}
		long long int ans=0;
		for(int i=0;i<31;i++){
			long long int x=1<<i;
			if(dp[i])
				ans+=x;
		}
		cout<<ans<<endl;
		for(int k=0;k<q;k++){
			long long int idx,val;
			cin>>idx>>val;
			for(int i=0;i<31;i++){
				long long int x=1<<j;
				if(a[i]&x){
					dp[j]+=1;
				}
			}
		}
		}
	}

}
