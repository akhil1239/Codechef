#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
ll n,t;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<round(sqrt(n))<<"\n";
	}
}
