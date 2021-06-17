#include<bits/stdc++.h>

using namespace std;

int goodsubarray(int a[],int L,int R,int n){
	int flag;
	for(int i=1;i<L;i++){
		flag=0;
		for(int j=L;j<=R;j++){
			if(a[i]==a[j])
				flag=-1;
				a[i]=a[i+1];
		}
		if(flag==-1){
			a[i]<a[i-1];
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count=0,res;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				res=goodsubarray(a,i,j,n);
				count=count+res;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
