#include<bits/stdc++.h>

using namespace std;
 
int main(){
	int t,n;
	cin>>t;
	int pip=0;
	int st,rem;
	while(t--){
		cin>>n;
		st=n/4;
		rem=n%4;
		pip=st*44;
		if(st!=0){
			switch(rem)
			{
				case 1:
						pip=pip+32;
						break;
				case 2:
						pip=pip+44;
						break;
				case 3:
						pip=pip+55;
						break;
				default:
						pip=pip+16;
							
			}
		}
		else
		{
			switch(rem)
			{
				case 1:
						pip=20;
						break;
				case 2:
						pip=36;
						break;
				case 3:
						pip=51;
						break;
				default:
						pip=0;
							
			}	
		}
		cout<<pip<<endl;
		pip=0;	
	}
	return 0;
}
