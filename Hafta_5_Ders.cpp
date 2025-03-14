#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	//int i = 0;
	//while (i < 5) //koþul true old. sürece
	//{
	//	cout << i << endl;
	//	i++;
	//}

	/*for (int i = 0; i < 5; i += 5)
	{
		cout << i << "\n";
	}*/

	/*for (int i = 0; i <= 1; i++) {

		cout << "Ýkinci döngü baþladý !\n";
		for (int j = 0; j <= 1; j++) {
			cout << "Merhaba\n";

			for (int k = 0; k < 2; k++)
			{
				cout << "3. döngü\n";
			}
		}
	}*/

	/*for (int i = 1; i <= 10; i++)
	{
		cout << "\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "x" << j << "=" << i * j << endl;

		}
	}*/

	// foreach  --> for (tip deðiþken_adi : dizi_adi) { }

	/*int dizi[5] = {2, 3, 6, 4, 3};
	for (int i : dizi)
	{
		cout << i << endl;
	}*/


	/*double ort = 0;
	int toplam = 0;
	int yaslar[10] = { 20, 30, 40, 50, 60, 54, 29, 22, 7, 11 };
	for (int i : yaslar)
	{
		cout << i << endl;
		toplam = toplam + i;
	}
	cout << "ortalama: " << (double)toplam / 10 << endl;
	cout << "toplam: " << toplam << endl;*/
}













