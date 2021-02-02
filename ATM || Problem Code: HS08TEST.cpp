#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
	int in;
	float a;
	cin >> in >> a;    //scanf("%d%f",&in,&a);
	
	if(in%5==0 && in+0.5<a)
		cout<<a-in-.50;  //<<fixed<<setprecision(2)<<re;    //printf("%.2f",re);

	else
		cout<<a;  //<<fixed<<setprecision(2)<<a;    //printf("%.2f",a);
	return 0;
}
