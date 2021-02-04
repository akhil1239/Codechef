#include<iostream>
#define ll long long
using namespace std;
ll n,t,x,c;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		c=0;
		while(n!=0){
			x=n%10;
			n=n/10;
			if(x==4) c++;
		}
		cout<<c<<"\n";
	}
}
