#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int r,c,k;
	int a[100][100];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	while(t--){
		cin>>r>>c>>k;
		int count=0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(a[i][j]>=k && a[i][j-1]<k && a[i-1][j-1]<k){
					int n=(r-i);
					count=count+(n*(n+1)*(2*n+1)/6);
				}	
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
