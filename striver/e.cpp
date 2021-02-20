#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[13];
    for(int i=1;i<=10;i++)
        a[i]=-1;
    for(int i=2;i<=10;i++)
    {
        if(a[i] == -1){
        	for(int j=2*i;j<=10;j=j+i){
            	if(a[j]==-1)
            		a[j]=0;
            	a[j]=a[j]+1;
        	}
        }
    }

    for(int i=0;i<10;i++){
    	cout<<a[i]<<" ";
    }
   
    //cout<<a[1000000]<<" ";
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     int n,m;long long ans=0,c=0;
    //     cin>>n>>m;
    //     if(n==1)
    //     n++;
    //     for(int i=n;i<m;i++)
    //     {
    //         c++;
    //         if(a[i]==-1)
    //         ans++;
    //         else
    //         ans=ans+a[i];
    //     }
    //     cout<<ans<<endl;
    // }
   return 0;
}