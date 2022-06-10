

#include <iostream>
using namespace std;
#define ll long long int

void solve(){
 
ll n; cin>>n;
ll ans=0;
string s; cin>>s;
ll z=0,on=0;
for(int i=0;i<n/2;i++) if(s[i]!=s[n-i-1]) ans++;

//cout<<min(z,on)<<" ";
//print(  min( (min(z,on)) , ans  )  )
if(ans&1) ans=ans/2+1;
else ans/=2;
cout<<ans<<endl;
} 
int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    solve();
	}
	return 0;
}



