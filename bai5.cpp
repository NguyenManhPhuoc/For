#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"a = ";
	float a; cin>> a;
	cout<<"b = ";
	float b; cin>>b;
	if(a==0 && b==0) cout<<"Phuong trinh co vo so nghiem";
	else if(a==0 && b!=0) cout<<"Phuong trinh vo nghiem";
	else if(a!=0) cout<<"Phuong trinh co nghiem duy nhat : "<<-b/a;
	return 0;
}
	
