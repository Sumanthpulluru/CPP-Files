#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int n;
	int num,q,x,y;
	while(t--){
		cin>>n;
		/*int *a=new int[n];
		int *p=new int[n];*/
		int *b=new int[n];
		vector<int> a,p;
		for(int i=0;i<n;i++){
			//cin>>a[i];
			cin>>x;
			a.push_back(x);
		}
	/*	for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;*/
		for(int i=0;i<n;i++){
			//cin>>p[i];
			cin>>x;
			p.push_back(x);
		}
	/*	for(int i=0;i<n;i++){
			cout<<p[i]<<" ";
		}
		cout<<endl;*/
		cin>>num;
		while(num--){
			cin>>q;
			switch(q){
				case 1:{
					for(int i=0;i<n;i++){
						b[p[i]-1]=a[i];
					}
					for(int i=0;i<n;i++){
						a[i]=b[i];
					}
				/*	for(int i=0;i<n;i++){
						cout<<a[i]<<" ";
					}
					cout<<endl;*/
					break;
				}
				case 2:{
					cin>>x>>y;
					int temp=a[x-1];
					a[x-1]=a[y-1];
					a[y-1]=temp;
				/*	for(int i=0;i<n;i++){
						cout<<a[i]<<" ";
					}
					cout<<endl;*/
					break;
				}
				case 3:{
					cin>>x;
					cout<<a[x-1]<<endl;
					break;
				}
			}	
		}
	}
	return 0;
	
}
