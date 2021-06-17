#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int t;
	cin>>t;
	char a[9];
	while(t--){
		char ch;
		int pw=0,cw=0,xc=0,oc=0,uc=0;
		for(int j=0;j<9;j++){
			cin>>ch;
			a[j]=ch;
			if(ch=='X') xc++;
			if(ch=='O') oc++;
			if(ch=='_') uc++;
			}
		
		if((a[0]=='X'&&a[1]=='X'&&a[2]=='X')||(a[3]=='X'&&a[4]=='X'&&a[5]=='X')||(a[6]=='X'&&a[7]=='X'&&a[8]=='X')||(a[0]=='X'&&a[4]=='X'&&a[8]=='X')||(a[2]=='X'&&a[4]=='X'&&a[6]=='X')||(a[0]=='X'&&a[3]=='X'&&a[6]=='X')||(a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[2]=='X'&&a[5]=='X'&&a[8]=='X')){
			pw=1;
		}
		if((a[0]=='O'&&a[1]=='O'&&a[2]=='O')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||(a[6]=='O'&&a[7]=='O'&&a[8]=='O')||(a[0]=='O'&&a[4]=='O'&&a[8]=='O')||(a[2]=='O'&&a[4]=='O'&&a[6]=='O')||(a[0]=='O'&&a[3]=='O'&&a[6]=='O')||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O')){
		cw=1;
		}
		if(!((xc==oc+1)||(xc==oc))) cout<<"3"<<endl;
		else if(pw==1&&cw==1) cout<<"3"<<endl;
		
		else if(xc==0&&oc==0&&uc==9) cout<<"2"<<endl;
		else if(pw==0&&cw==0&&uc>0) cout<<"2"<<endl;
		
		else if(pw==1&&xc==oc+1) cout<<"1"<<endl;
		else if(cw==1&&xc==oc) cout<<"1"<<endl;
		else if(pw==0&&cw==0&&uc==0) cout<<"1"<<endl;
		
		
		else cout<<"3"<<endl;
	}
}
