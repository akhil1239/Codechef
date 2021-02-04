#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,i;
int main(){
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++) cout<<a[i]<<"\n";
}
