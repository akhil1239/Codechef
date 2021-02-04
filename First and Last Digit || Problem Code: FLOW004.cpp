#include<iostream>
#define ll long long
using namespace std;
ll n,t,i,x;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		x=n%10;
		while(n!=0){
			i=n%10;
			n=n/10;
		}
		cout<<x+i<<"\n";
	}
}
