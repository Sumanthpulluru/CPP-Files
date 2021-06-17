#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	int xa,xb,XA,XB;
	while(t--){
		cin>>xa>>xb>>XA>>XB;
		int count;
		count=ceil(XA/xa)+(XB/xb);
		cout<<count<<endl;
	}	
}
