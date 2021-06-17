#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,count;
	cin>>t;
	int n,m,k,ele;
	while(t--){
		cin>>n>>m>>k;
		//flag=0;
		count=0;
		int *arr=new int[n+m];
		for(int i=0;i<(n+m);i++){
			arr[i]=0;
		}
		for(int i=0;i<k;i++){
			cin>>ele;
			arr[ele-1]++;
		}
		for(int i=0;i<n;i++){
			if(arr[i]>1){
				count++;
			}
		}
		cout<<count<<" ";
		for(int i=0;i<n;i++){
			if(arr[i]>1){
				 //flag=1;
				 cout<<i+1<<" ";
			}
		}
		//if(flag==0) cout<<"0"<<endl;
		cout<<endl;
	}
}
