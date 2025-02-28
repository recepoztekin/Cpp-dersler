
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

	/* KISALTMALAR
	x = 5
	x + = 5  -->  x = x + 5
	x - = 10 -->  x = x - 10
	x * = 5  -->   x = x * 5
	x / = 2  -->   x = x / 2
	x % = 2  -->   x = x % 2

	*/

	/*
	int x = 120;
	int y = 3;
	cout << (x < y);*/

	/*
	==       x == y
	!=       x != y
	>        x > y
	<        x < y
	>=       x >= y
	<=       x <= y
	*/

	/*int toplam;
	bool sonuc;
	bool hesap;
	int z = 23;
	int x = 45;
	int y = 33;
	toplam = x + y;
	hesap = toplam > z;
	cout << hesap;*/

	/*
	  &&         x < 5 && x < 10
	  ||         x > 5 || x < 7
	  !          !(x < 5 && x < 10)
	*/

	//int x = 20;
	//int y = 15;
	//cout << (x < 5 || y>10); // 1

	/*string ad = "Recep";
	string soyad = "Oztekin";
	string tamAd = ad +" "+ soyad;
	cout<< tamAd;*/

	/*
	.APPEND -- > iki ifadeyi birleþtirir.
	*/

	/*string ad = "Recep";
	string soyad = "Oztekin";
	string tamAd = ad.append(soyad);
	cout << tamAd;*/

	/*string x = "20";
	string y = "30";
	string z = x + y;
	cout << z;
	cout << z.length();*/



	// kelime.length() -- > kelime deðiþkeninin içindeki karakter uzunluðu  
	//string kelime = "Bugün nasýlsýnýz ?";
	//cout << "Uzunluk:" << kelime.length(); // 1.yöntem
	//cout << "\n\n";
	//cout << "Uzunluk:" << kelime.size(); // 2.yöntem








	//string ifade = "Recep Oztekin";
	//cout << ifade[0] << endl; // ifadenin 0.indis deðerini döndürür. R 
	//cout << ifade[1] << endl; // ifadenin 1.indis deðerini döndürür. e
	//cout << ifade[2] << endl; // ifadenin 2.indis deðerini döndürür. c
	//cout << ifade[3] << endl; // ifadenin 3.indis deðerini döndürür. e
	//cout << ifade[4] << endl; // ifadenin 4.indis deðerini döndürür. p 
	//cout << ifade[5] << endl; // ifadenin 5.indis deðerini döndürür.  
	//cout << ifade[6] << endl; // ifadenin 6.indis deðerini döndürür. O
	//cout << ifade[7] << endl; // ifadenin 7.indis deðerini döndürür. z
	//cout << ifade[8] << endl; // ifadenin 8.indis deðerini döndürür. t
	//cout << ifade[9] << endl; // ifadenin 9.indis deðerini döndürür. e
	//cout << ifade[10] << endl; // ifadenin 10.indis deðerini döndürür. k
	//cout << ifade[11] << endl; // ifadenin 11.indis deðerini döndürür. i
	//cout << ifade[12] << endl; // ifadenin 12.indis deðerini döndürür. n
	//cout << "\n\n";

	//cout << ifade[ifade.length() - 1] << "\n\n"; // --> son karakteri döndürür --> n
	//cout << ifade.length() - 1 << "\n\n"; // --> son karakterin indis deðerini döndürür --> 12

	//cout << ifade << endl;
	//ifade[0] = 'T'; // --> 0.indis deðerini T ile deðiþtirdi.
	//cout << ifade << "\n\n"; //--> Tecep Oztekin

	//ifade.at(0) = 'T'; // --> ifadenin 0. indisini T ile deðiþtirip yazdýrdý.
	//cout << ifade[0];





	//string tamAd;
	//cout << "Lutfen ad soyad yazin: ";
	//cin >> tamAd;
	//cout << "Tam Adiniz: " << tamAd <<"\n\n"; //--> Sadece isim alýr boþluktan sonrasýný almaz. Recep
	//getline(cin, tamAd); //--> Tam adý almasý için getline kullanýlýr ---> Recep oztekin




	//cout << max(5, 10) << "\n"; // --> max deðerini döndürür
	//cout << min(10, 2) << "\n"; //--> min deðerini döndürür.


	//cout << sqrt(16) << "\n"; //--> taban karesini verir. --> 4
	//cout << round(2.33) << "\n"; //--> 2'ye yuvarlar.
	//cout << log(10) << "\n"; //--> 10'un logaritmasýný verir --> 2.3025
	//cout << round(log(10)) << "\n"; //--> 10 un logaritmasýný tam sayýya yuvarlar --> 2

































	cout << "\n\n";
	return 0;
}
