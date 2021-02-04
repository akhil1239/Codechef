#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll t,n,k,i,x,y,tar;
	cin>>t;
	while(t--){
		cin>>n>>k;
		x=0; y=0;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			x+=a[i];
		}
		if(x%k==0) cout<<"0"<<"\n";
		else cout<<"1"<<"\n";
	}
}
