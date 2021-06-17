#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int n,x,ele,exc;
	while(t--){
		cin>>n>>x;
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>ele;
			s.insert(ele);
		}
		exc=n-s.size();
		x=x-exc;
		if(x<=0)
			cout<<s.size()<<endl;
		else
			cout<<s.size()-x<<endl;
	}
	return 0;
}
