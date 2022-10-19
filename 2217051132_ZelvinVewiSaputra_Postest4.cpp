#include <iostream>
using namespace std;

int main(){
	float n, sum=0,mean,sigma=0,varians;
	cout<<"Jumlah data n :";
	cin>>n;
	
	for(int a=0; a <= n; a++){
		sum=sum+a;
	}mean=sum/n;
	
		for(int b = 1; b <= n; b++){
		sigma+=(b-mean)*(b-mean);
	}	varians=sigma/(n-1);
	cout<<varians;
	
	return 0;
}
