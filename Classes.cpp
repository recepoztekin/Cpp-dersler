#include <iostream>
using namespace std;

class Araba {
public:
	string renk;
	int ucret;
	int beygir;
	string marka;
	int uretimYili;
};  // sýnýf ve sýnýfýn özelliklerini oluþturduk


int main()
{
	Araba ilkArabam; //obje adýmý belirttim.
	Araba esiminArabasi;
	Araba arkadasinArabasi;

	ilkArabam.renk = "Beyaz";
	ilkArabam.marka = "Ford Mustang";
	ilkArabam.beygir = 750;
	ilkArabam.ucret = 2000000;
	ilkArabam.uretimYili = 2024; // ilkArabam adlý nesnenin özelliklerini belirttim.

	cout << "Ilk arabamin ozallikleri: " << endl;
	cout << "Ilk arabamin rengi: " << ilkArabam.renk << endl;
	cout << "Ilk arabamin markasi: " << ilkArabam.marka << endl;
	cout << "Ilk arabamin modeli: " << ilkArabam.uretimYili << endl;
	cout << "Ilk arabamin ucreti: " << ilkArabam.ucret << endl;
	cout << "Ilk arabamin beygiri: " << ilkArabam.beygir << endl; 
	cout << endl << endl;



	esiminArabasi.renk = "Siyah";
	esiminArabasi.marka = "Ford Focus";
	esiminArabasi.beygir = 200;
	esiminArabasi.ucret = 200000;
	esiminArabasi.uretimYili = 2021; // esiminArabasi adlý nesnenin özelliklerini belirttim.

	cout << "Esimin arabasinin ozallikleri: " << endl;
	cout << "Esimin arabasinin rengi: " << esiminArabasi.renk << endl;
	cout << "Esimin arabasinin markasi: " << esiminArabasi.marka << endl;
	cout << "Esimin arabasinin modeli: " << esiminArabasi.uretimYili << endl;
	cout << "Esimin arabasinin ucreti: " << esiminArabasi.ucret << endl;
	cout << "Esimin arabasinin beygiri: " << esiminArabasi.beygir << endl;
	cout << endl << endl;



	arkadasinArabasi.renk = "Mavi";
	arkadasinArabasi.marka = "Ford Kuga";
	arkadasinArabasi.beygir = 150;
	arkadasinArabasi.ucret = 175000;
	arkadasinArabasi.uretimYili = 2023; // arkadasinArabasi adlý nesnenin özelliklerini belirttim.

	cout << "Arkadasimin arabasinin ozallikleri: " << endl;
	cout << "Arkadasimin arabasinin rengi: " << arkadasinArabasi.renk << endl;
	cout << "Arkadasimin arabasinin markasi: " << arkadasinArabasi.marka << endl;
	cout << "Arkadasimin arabasinin modeli: " << arkadasinArabasi.uretimYili << endl;
	cout << "Arkadasimin arabasinin ucreti: " << arkadasinArabasi.ucret << endl;
	cout << "Arkadasimin arabasinin beygiri: " << arkadasinArabasi.beygir << endl;
	cout << endl << endl;


}
