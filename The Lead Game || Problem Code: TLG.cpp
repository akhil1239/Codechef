#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,w,l=0,a,b,x=0,y=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		x+=a;
		y+=b;
		if(abs(x-y)>l){ 
		l=abs(x-y);
		x>y?w=1:w=2;
		}
	}
	cout<<w<<" "<<l;
}
