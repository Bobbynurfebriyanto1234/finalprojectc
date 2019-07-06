#include <iostream>
using namespace std;

int main(){
	//Deklarasi variable kunci dan pesan
	char kunci[5], pesan[10];

	printf("****Tool Enkripsi XOR******");

	//Input kunci
	cout << "*Maksimal panjang pesan adalah 10 karakter\n ";
	cout << "Masukkan Kunci: ";
    cin >> kunci;
  
  	//Input pesan
  	cout << "\n*Maksimal panjang kunci adalah 5 karakter\n ";
    cout << "Masukkan Pesan: ";
    cin >> pesan;

    //Logic enkripsi XOR 
    for(int x=0; x<10; x++)
  	{

  	//Pesan kita XOR dengan kunci
    pesan[x] = pesan[x] ^ kunci[x];
    cout << pesan[x];
 	}
}
