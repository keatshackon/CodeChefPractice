#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i=0,j,k,count = 0;
	cin>>t;
	while(t--){
		cin>>n;
		count = 0;
		i=1;
		if(n&(n-1) == 0 && n >2048 ){

		}
		while(n>=1){
			j =  pow(2,i);
			if(j>n){
				n = n - pow(2,i-1);
				i=1;
				count++;
			}
			i++;
		}
		if()
		cout<<count<<"\n";
		

	}
	return 0;
}