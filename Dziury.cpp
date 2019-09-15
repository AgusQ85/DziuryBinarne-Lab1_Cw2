
#include <iostream>       
#include <string>        
#include <algorithm>

using namespace std;

void Szukajka(string& tekst, string szukanaFraza, int licznik)
{
	size_t znalezionaPozycja = tekst.find(szukanaFraza);
	//if (znalezionaPozycja == string::npos) {	//	cout << "Nie znaleziono frazy w tekscie" << endl;	//	//return;	}

	do
	{
		cout << "Po docieciu fraza \"10\" zostala odnaleziona na pozycji o indeksie: " << znalezionaPozycja<<"." << endl;
		znalezionaPozycja = tekst.find(szukanaFraza, znalezionaPozycja + szukanaFraza.size());
		licznik++;
	}
	while (znalezionaPozycja != string::npos);
	cout << "\n\nW Y N I K   P R O G R A M U :\n";
	cout << "\n\nLiczba dziur w podanym ciagu liczb binarnych wynosi: " <<licznik <<endl << endl << endl << endl;
}


int main()
{
	string ciagBinarny;

	string szukam10("10");
	string szukam1("1");
	string szukam0("0");
	int licznik = 0;

	cout << "PROGRAM DO ZLICZANIA DZIUR BINARNYCH by Agnieszka Bukowska\n\n";
	cout << "Podaj ciag binarny: ";
	cin >> ciagBinarny;
	cout << "\nPodales nastepujacy ciag binarny: " << ciagBinarny << endl << endl;

	string tmp1 = ciagBinarny;
	string tmp2 = ciagBinarny;

		size_t znajdz10 = ciagBinarny.find(szukam10); //wyszukaj w Stringu "10"
		if (znajdz10 != string::npos) //jezeli wyszukiwanie przebieglo pomyslnie to zwraca numer pierwszego indeksu na ktorym znaleziono 10:
			cout << "O P I S   P R O G R A M U\n\n";
			cout << "1. Najpierw wyszukuje pod ktorym indeksem z lewej kryje sie kombinacja \"10\". Jest to indeks nr: " << znajdz10 << "." << endl;;
			size_t x = znajdz10;
		
				
		string::iterator first = tmp1.begin() + 0;
		string::iterator last = tmp1.begin() + x;
		tmp1.erase(first, last);
		

		size_t koniec = tmp1.size();
	

	

	//------------------------------------

	size_t znajdz1 = tmp1.rfind(szukam1);
	if (znajdz1 != string::npos) //jezeli wyszukiwanie przebieglo pomyslnie to zwraca numer pierwszego indeksu na ktorym
		//znaleziono 1:
		cout << "2. Wyszukuje ostatnia podana liczbe \"1\" i zwracam jej indeks, ktory wynosi: "<< znajdz1 << "." << endl;
	size_t y = znajdz1+1;
	

	cout << "1. Docinamy ciag z lewej strony od elementu o indeksie zero do indeksu od pierwszej wyszukanej wartosci \"10\".\n";
	cout << "2. Powstaly ciag docinamy z prawej strony: od indeksu nastepnego po znalezieniu ostatniej jedynki, az do konca.\n";
	cout << "3. W powstalym ciagu mozna zliczyc wystapienie \"10\", co daje nam ilosc dziur binarnych.\n";



	string::iterator firstE = tmp1.begin() + y;
	string::iterator lastE = tmp1.begin() + koniec;
	tmp1.erase(firstE, lastE);
//	cout << "Prawe dociecie to:" << tmp1; //"ala kota"



	
	string lolek = tmp1;
	//---------------------------------------------------



	{

		Szukajka(lolek, "10", licznik);
		return 0;
	}
}