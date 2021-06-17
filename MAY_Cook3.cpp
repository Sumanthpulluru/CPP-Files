#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int x1,y1,x2,y2,d=0,sum,curr,x,y;
	while(t--){
		cin>>x1>>y1>>x2>>y2;
		curr=1;
		//sum=1;
		x=1,y=1;
		while(x<x1){
			curr+=x+y;
			x++;
		}
		while(y<y1){
			curr+=x+y-1;
			y++;
		}
		sum=curr;
		x=x1,y=y1;
		x1=x2;
		y1=y2;
	//	curr=1;
	//	sum=1;
		//x=x1,y=y1;
		while(x<x1){
			curr+=x+y;
			sum+=curr;
			x++;
		}
		while(y<y1){
			curr+=x+y-1;
			sum+=curr;
			y++;
		}
		cout<<sum<<endl;
		
	}
}
