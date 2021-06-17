#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	long long int a,b,ac=0,bc=0;

	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++){
			char s[100];
			cin>>s;
			if((s[0]=='E')||(s[0]=='Q')||(s[0]=='U')||(s[0]=='I')||(s[0]=='N')||(s[0]=='O')||(s[0]=='X')){
				ac=ac+a;
			}
			else
				bc=bc+b;
		}
		if(ac>bc)
			cout<<"SARTHAK"<<endl;
		else if(ac<bc)
			cout<<"ANURADHA"<<endl;
		else
			cout<<"DRAW"<<endl;
	}
	return 0;
}
