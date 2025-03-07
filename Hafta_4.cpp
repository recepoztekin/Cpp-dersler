// ARU_Hafta_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*int yas = 17;
	int oykullanmayasi = 18;

	if (yas >= oykullanmayasi)
	{
		cout << "Oy kullanabilirsiniz.";
	}
	else
	{
		cout << "Oy kullanamazsýnýz.";
	}*/

	/*int saat = 9;

	if (saat < 10)
	{
		cout << "Gunaydin";
	}
	else if (saat < 17)
	{
		cout << "Iyi Gunler";
	}
	else
	{
		cout << "Iyi aksamlar";
	}*/


	/*int zaman;
	string isim;

	cout << "Isminizi Girin: ";
	cin >> isim;
	cout << "Saati Girin: ";
	cin >> zaman;

	if (zaman < 10) // ilk bu koþula bakar çalýþmazsa alta geçer
	{
		cout << "Gunaydin" << " " << isim;
	}
	else if (zaman < 17) // bu koþul if koþulu çalýþmazsa çalýþýr
	{
		cout << "Iyi Gunler" << " " << isim;
	}
	else // hiçbir koþul çalýþmazsa else çalýþýr
	{
		cout << "Iyi aksamlar" << " " << isim;
	}*/




	//int sayi = 13;
	//// Ternary Operator
	//string sonuc = (sayi % 2 == 0) ? "2'ye tam bolundu" : "2'ye tam bolunmedi"; // ?'den sonra yazýlan True olmalý :'dan sonra yazýlan false olmalý
	//cout << sonuc;


	//int gun;
	//cout << "Haftanýn gununu sayi olarak girin: ";
	//cin >> gun;
	//// switch case
	//switch (gun) {
	//case 1:
	//	cout << "Pazartesi";
	//	break;
	//case 2:
	//	cout << "Sali";
	//	break;
	//case 3:
	//	cout << "Carsamba";
	//	break;
	//case 4:
	//	cout << "Persembe";
	//	break;
	//case 5:
	//	cout << "Cuma";
	//	break;
	//case 6:
	//	cout << "Cumartesi";
	//	break;
	//case 7:
	//	cout << "Pazar";
	//	break;
	//default:
	//	cout << gun <<". gun yok ";
	//}


	//int sayac = 11;
	//while (sayac < 10) { // while döngüsünde koþul saðlanmazsa çalýþmaz

	//	cout << "Sayi budur: " << sayac << endl;
	//	sayac++;
	//}


	//int sayac = 5;
	//do  // do while döngüsünde koþul saðlanmasa bile bir defa çalýþtýrýlýr
	//{
	//	// tekrarlanacak yapý gelecek
	//	cout << "Sayi budur: " << sayac << endl;
	//	sayac++;
	//} while (sayac > 10);

	/*int sayac = 3;
	do
	{
		cout << "Geri Sayim: " << sayac << endl;
		sayac--;
	} while (sayac >= 0);
	cout << "Mutlu Yillar.";*/






	// 1] 0'dan klavyeden girilen sayýya kadar olan sayýlarý yazdýr
	// 2] 0'dan klavyeden girilen sayýya kadar olan ÇÝFT sayýlarý yazdýr
	// 3] 0'dan klavyeden girilen sayýya kadar olan sayýlarýn yanýna
	// "TEK" ya da "ÇÝFT" yazdýr.Örnek: Tek :5
	// 4] 0'dan 10'a kadar olan sayýlarý toplayýp ekrana yazdýrýn


// 1] 0'dan klavyeden girilen sayýya kadar olan sayýlarý yazdýr
	/*int baslangic = 0;
	int sayi;
	cout << "0'dan buyuk bir sayý girin: ";
	cin >> sayi;
	do
	{
		cout << "Sayim: " << baslangic << endl;
		baslangic++;
	} while (baslangic <= sayi);
	cout << "\n";*/


	// 2] 0'dan klavyeden girilen sayýya kadar olan ÇÝFT sayýlarý yazdýr
	/*int sayac = 0;
	int sayi;

	cout << "0'dan buyuk bir sayý girin: ";
	cin >> sayi;
	while (sayac <= sayi)
	{
		if (sayac % 2 == 0) {
			cout << sayac << endl;
		}
		sayac++;
	}*/


	// 3] 0'dan klavyeden girilen sayýya kadar olan sayýlarýn yanýna
		// "TEK" ya da "ÇÝFT" yazdýr.Örnek: Tek :5
	//int sayac = 0;
	//int sayi;

	//cout << "0'dan buyuk bir sayý girin: ";
	//cin >> sayi;
	//while (sayac <= sayi)
	//{
	//	if (sayac % 2 == 0) {
	//		cout << sayac << ": CIFT" << endl;
	//	}
	//	else
	//	{
	//		cout << sayac << ": TEK \n";
	//	}
	//	sayac++;
	//}


// 4] 0'dan 10'a kadar olan sayýlarý toplayýp ekrana yazdýrýn

	//int sayac = 0;
	//int sayi = 10;
	//int toplam = 0;


	//while (sayac < sayi)
	//{
	//	if (sayac % 2 == 0) {
	//		toplam = toplam + sayac;
	//	}
	//	sayac++;
	//}
	//cout << "Toplam: " << toplam;

}