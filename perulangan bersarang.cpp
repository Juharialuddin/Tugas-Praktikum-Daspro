#include <iostream>
using namespace std;

main (){
	int n =6+6;
	cout<<"Beberapa pola :";
	cin>>n;
	
	for (int i=1; i <= n; i++){
		for ( int j=n; j >= i; j--){
			cout<<i*j<<" ";
		}cout<<endl;
	}
}
