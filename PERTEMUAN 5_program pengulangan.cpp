#include <iostream>
using namespace std;

int main (){
	//perulangan
	
	for(int x = 1; x<= 5; x++){
		
		for (int y = 1; y <= 5; y++){
			int a = y * x;
			cout << y <<" x " << x << " = " << a << endl;
		}
		
		cout << endl;		
	}
	
}
