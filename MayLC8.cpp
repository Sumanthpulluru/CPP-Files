#include<bits/stdc++.h>

using namespace std;

int gcd(int n1,int n2){
	while(n1!=n2){
		if(n1>n2) n1-=n2;
		else n2-=n1;
	}
	return n1;
}

int main(){
	int t,k,a,b,sum;
	cin>>t;
	while(t--){
		cin>>k;
		sum=0;
		for(int i=1;i<(2*k+1);i++){
			a=k+i*i;
			b=k+(i+1)*(i+1);
			sum=sum+gcd(a,b);
		}
		cout<<sum<<endl;
	}
	return 0;
}
