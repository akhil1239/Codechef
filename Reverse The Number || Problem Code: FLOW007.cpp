#include<iostream>
#define ll long long
using namespace std;
ll n,t,x,y;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		y=0;
		while(n!=0){
			x=n%10;
			y=y*10+x;
			n=n/10;	 
		}
		cout<<y<<"\n";
	}
}
