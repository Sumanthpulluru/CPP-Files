#include<bits/stdc++.h>

using namespace std;

int main(){
	int r,c,k;
	float a[100][100];
	cin>>r>>c>>k;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	int count=0;
	int limit=0;
	for(int lim=0;lim<c;lim++)
	{
		for(int i=0;i<r-lim;i++)
		{
			for(int j=0;j<c-lim;j++)
			{	
				float sum=0;
				int ele=0;
				for(int x=0;x<=lim;x++)
				{
						sum=sum+a[i][j+x]+a[i+x][j];
						ele=ele+2;
				}
				float temp=a[i]a[j];
				sum=sum-temp;
				ele=ele-1;
				if(lim!=0){	
				sum=sum-a[i+lim][j+lim];
				ele=ele-1;
				}
				sum=sum/ele;
				if(sum>=k)
				{
					count++;
					cout<<count<<" "<<lim<<endl;
				}
			}
		}
	}
	cout<<count;
	return 0;
	
}
