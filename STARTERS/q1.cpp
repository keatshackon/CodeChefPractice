/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define N 10001
#define lb lower_bound
#define M 100000000
#define ub upper_bound
#define mp make_pair
#define LD long double
#define f first
#define se second 

int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n,a,b,c;

	cin>>t;
	while(t--){
	    cin>>d>>c;
        cin>>i>>j>>k;
        cin>>x>>y>>z;
        
        if((i+j+k) >= 150 and (x+y+z) >= 150){
            if((i+j+k+x+y+z+c) >= (i+j+k+x+y+z+d+d)){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }else if((i+j+k) >= 150 or  (x+y+z) >= 150){
            if((i+j+k) >= 150){
                int temp = (x+y+z+d);
                if(i+j+k+d > i+j+k+c){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }else{
                if(x+y+z+d > x+y+z+c){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
        }else{
            cout<<"NO\n";
        }

	}
	
	
    return 0;
}