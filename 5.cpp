#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	int n,w,wr,x;
	cin>>t;
	while(t--){
		cin>>n>>w>>wr;
		int a[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
		if(wr>=w){
			cout<<"YES"<<endl;
		}
		else{
			
			int count=0,tot=0;
			for(int i=0;i<n;i++){
				count=0;
				x=a[i];
				if(x!=0)
				{
				for(int j=0;j<n;j++){
					if(a[j]==x){
						a[j]=0;
						count++;
					}
				}
				}
				tot=tot+(count-(count%2))*x;
			}
			if(wr+tot>=w){
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
