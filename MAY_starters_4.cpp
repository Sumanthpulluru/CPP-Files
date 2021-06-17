#include<bits/stdc++.h>

using namespace std;

struct List{
	int start;
	int end;
};

bool comp(struct List a, struct List b){
	return (a.end<b.end);
}

int main(){
	int t,n,f,k;
	cin>>t;
	int s,e;
	while(t--){
		cin>>n>>k>>f;
		int count=0;
		struct List l[n];
		for(int i=0;i<n;i++){
			cin>>s>>e;
			l[i].start=s;
			l[i].end=e;
		}
		sort(l,l+n,comp);
		int i=0;
		for(int j=1;j<n;j++){
			if(l[j].start>=l[i].end){
				count+=l[j].start-l[i].end;
				cout<<count<<" ";
				i=j;
			}
		}
		count+=f-l[n-1].end;
		if(count>=k) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}

}
