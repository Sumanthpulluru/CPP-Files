#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	long int i,j,n,m;
	while(t--){
		cin>>n>>m;
		int count=0;
		for(i=1;i<=n;i++){
			for(j=i+1;j<=n;j++){
				if((m%i)%j==(m%j)%i)
					count++;
			}
		}
		cout<<count<<endl;
	}
}
