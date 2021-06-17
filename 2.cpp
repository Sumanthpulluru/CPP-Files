#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	long long int n,r;
	long long int tot,max;
	while(t--){
		cin>>n>>r;
		long long int a[n],b[n];
		for(long long int i=0;i<n;i++){
			cin>>a[i];
		}
		for(long long int i=0;i<n;i++){
			cin>>b[i];
		}
		tot=b[0];
		max=b[0];
		for(long long int i=1;i<n;i++){
			tot=tot-((a[i]-a[i-1])*r);
			if(tot<0){
				tot=0;
			}
			tot=tot+b[i];
			if(tot>max){
				max=tot;
			}
		}
		cout<<max<<endl;
	}
}
