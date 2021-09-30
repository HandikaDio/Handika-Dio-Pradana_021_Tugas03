#include <iostream>
using namespace std;

int main()
{
	int nilai1, nilai2, pilih, hasil;
	cout << " === kalkulator ===" << endl;
	cout << " Penjumlahan" << endl;
	cout << " Pengurangan" << endl;
	cout << " Perkalian" << endl;
	cout << " Pembagian" << endl;
	cout << " Modulus" << endl;

	cout << " Masukkan bilangan pertama : ";
	cin >> nilai1;
	cout << " Masukkan bilangan kedua : ";
	cin >> nilai2;
	cout << " Masukkan Pilihan Operasi Matematika : ";
	cin >> pilih;

	switch (pilih){
		case 1:
			hasil = nilai1+nilai2;
			cout << nilai1 << "+" << nilai2 << "=" << hasil;
		break;
		case 2:
			hasil = nilai1-nilai2;
			cout << nilai1 << "-" << nilai2 << "=" << hasil;
		break;
		case 3:
			hasil = nilai1*nilai2;
			cout << nilai1 << "*" << nilai2 << "=" << hasil;
		break;
		case 4:
			hasil = nilai1/nilai2;
			cout << nilai1 << "/" << nilai2 << "=" << hasil;
		break;
		case 5:
			hasil = nilai1%nilai2;
			cout << nilai1 << "%" << nilai2 << "=" << hasil;
		break;
		default :
			cout << "Menu yang anda masukkan tidak valid" << endl;
	}	
}
