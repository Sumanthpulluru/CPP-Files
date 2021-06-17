#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,l;
	cin>>t;
	int x,y;
	while(t--){
		cin>>l;
		string s;
		cin>>s;
		x=0;
		y=0;
		int flag=0;
		for(int i=0;i<l;i++){
			if(s[i]=='0')
				y++;
				//cout
			else
				x++;
			if(x>=y){
				flag=1;
				break;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
