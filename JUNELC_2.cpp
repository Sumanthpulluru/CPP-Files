#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	int D,d,P,Q;
	while(t--){
		cin>>D>>d>>P>>Q;
		int res=0;
		int curr=P;
		int day=0;
		while(day!=D){
			if(day%d==0 && day!=0){
				curr+=Q;
			}
			res=res+curr;
		//	cout<<day<<" "<<res<<endl;
			day++;
		}
		cout<<res<<endl;
	}	
}
