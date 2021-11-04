#include<iostream>

using namespace std;

int main ()
{
	char nomenuMakanan, nomenuMinuman;
	int harga1, harga2;
	
	cout <<"DAFTAR MENU"<< endl;
	cout <<"MAKANAN :"<< endl;
	cout <<"1. coto makasar Rp25000" << endl;
	cout <<"2. pallu basa 	Rp20000" << endl;
	cout <<"MINUMAN:" <<endl;
	cout <<"1. es teh Rp5000" << endl;
	cout <<" jus jeruk Rp7000" << endl;
	
	cout << "inputkan nomor menu makanan"<< endl;
	cin >> nomenuMakanan;
	
	switch (nomenuMakanan) {
	case '1':
		cout << "memesan Coto Makasar" << endl;
		harga1 = 25000;
	case '2':
		cout <<"memesan Pallu Basa" << endl;
		harga1 = 20000;
		break;
	default:
		cout << "tidak ada dimenu" << endl;
	}
	
	cout << "input nomor menu minuman" <<endl;
	cin >> nomenuMinuman;
	
	switch (nomenuMinuman){
	case '1':
		cout << "memesan Es Teh" << endl;
		harga2 = 5000;
		break;
	case '2':
		cout <<"memesan Jus Jeruk" << endl;
		harga2 = 7000;
		break;
	default:
		cout <<"tidak ada dimenu" << endl;
	}
	cout <<"====================" << endl;
	cout <<"total harga yang harus dibayar adalah: Rp" << harga1+harga2<< endl;	
	
}
