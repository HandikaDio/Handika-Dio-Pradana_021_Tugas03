#include <iostream>
using namespace std;
int main()
{
	int tahun;
	cout << "Masukkan tahun : ";
	cin >> tahun;
	if (tahun%400 == 0){
    	cout << "Merupakan Tahun Kabisat\n";
  	} 
  	else if (tahun%100 == 0){
    	cout << "Bukan Tahun Kabisat\n";
  	} 
  	else if (tahun%4 == 0){
    	cout << "Merupakan Tahun Kabisat\n";
  	} 
  	else {
    	cout << "Bukan Tahun kabisat\n";
  	}

  	return 0;
}
