#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"n= ";
	cin>>n;
	int s=0;
	for(int i=1; i<=n;i++){
		if(i%2 ==1){
		s+=i;
		}
	}
		cout<<"Ket qua la: "<<s;
return 0;
}
