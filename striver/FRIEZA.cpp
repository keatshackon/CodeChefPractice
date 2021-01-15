#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		string res="";
		for(int i=0;i<s.size()-1;i++){
			int cnt = 0;
			int j=i;
			while(j<s.size()){
				size_t found = s.find(s[i]); 
				 if (!(found != string::npos)) {
				 	cnt++;
				 }else{
				 	break;
				 }
				 j++;
			}
			res+= to_string(cnt);
		}
		cout<<res<<"\n";
	}
}