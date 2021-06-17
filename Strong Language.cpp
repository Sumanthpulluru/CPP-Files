#include<bits/stdc++.h>
#include<string.h>

using namespace std;
    
int main()
{
    int n;
    int l,k;
    string s;
    cin>>n;
    while(n!=0){
        cin>>l>>k;
        cin>>s;
        int count=0;
        int flag=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='*' and count==0){
			count=1;
			}
			
            else if(s[i]=='*' and count!=0){
                count++;
                if(count==k)
                    flag=1;
                    break;
            }
            
            else{
			count=0;
			}
        }    
            if(flag==1){
            cout<<"YES";
             }
            else{
            cout<<"NO";
             }
         n--;
    }
    
   return 0;
}
