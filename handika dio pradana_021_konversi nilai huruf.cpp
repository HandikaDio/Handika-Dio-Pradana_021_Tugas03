#include <iostream>
using namespace std;
int main()
{
	int nilai;
	cout << "Masukkan Nilai : ";
	cin >> nilai;

        if (nilai >= 80 && nilai <= 100){
            cout << "Nilai anda A" << endl;
        }
        else if (nilai >= 65 && nilai <= 79){
            cout << "Nilai anda B" << endl;
        }
        else if (nilai >= 50 && nilai <= 64){
            cout << "Nilai anda C" << endl;
        }
        else if (nilai >= 35 && nilai <= 49){
            cout << "Nilai anda D" << endl;
        }
        else if(nilai >= 0 && nilai <= 34){
            cout << "Nilai anda E" << endl;
        }
        else {
        	cout << "Nilai anda tidak valid" << endl;
		}
}
