#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int g,p;
	int *arr=new int[10];
	while(t--){
		cin>>g>>p;
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
		int curr=0,in,out;
		for(int i=9;i>g-1;i--){
			curr=curr+arr[i];
		}
		in=(curr+1)/p+((curr+1)%p==0?0:1);
		out=(curr+arr[g-1])/p+((curr+arr[g-1])%p==0?0:1);
		cout<<in<<" "<<out<<endl;
	}
}
	int t;
	cin>>t;
	int g,p;
	int *arr=new int[10];
	while(t--){
		cin>>g>>p;
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
		int curr=0,in,out;
		for(int i=9;i>g-1;i--){
			curr=curr+arr[i];
		}
		in=(curr+1)/p+((curr+1)%p==0?0:1);
		out=(curr+arr[g-1])/p+((curr+arr[g-1])%p==0?0:1);
		cout<<in<<" "<<out<<endl;
	}
}
