#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		int flag=0;
		while(n--){
			cin>>s;
			int k=0;
			if('a'<=s[0] && s[0]<='m'){
				for(int i=1;i<s.length();i++){
					if(!('a'<=s[i] && s[i]<='m')) k++;	
				}
				if(k!=0){
					flag=1;
					cout<<"NO"<<endl;
				}
			}	
			else if('N'<=s[0] && s[0]<='Z'){
				for(int i=1;i<s.length();i++){
					if(!('N'<=s[i] && s[i]<='Z')) k++;	
				}
				if(k!=0){
					flag=1;
					cout<<"NO"<<endl;
				}
			}
			else{
				flag=1;
				cout<<"NO"<<endl;
			}
			if(flag==1) break;
		}
		if(flag==0) cout<<"YES"<<endl;
	
	}
	return 0; 
}

