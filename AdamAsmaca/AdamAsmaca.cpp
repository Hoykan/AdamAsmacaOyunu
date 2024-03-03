#include<iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;
string kelime_sec() {
	
	vector<string> kelimeler = { "DARAMCIK","","KABARCIKLI","MADALYONCU","ADAMASMACA","JENERASYON","LADESLENME","KAPI","HACIYATMAZ","KAMP","LAFAZANLIK","RADYOCULUK","OKUL","FUTBOL","ALMANYA","MALATYA","AYDIN",};
	srand(time(NULL));
	int index = rand() % kelimeler.size();
	return kelimeler[index];

}
string gizlikelime(const string& kelime) {
	string gizli(kelime.length(), '_');
	return gizli;
}
void adamasmacagöster(int yanlisdeneme) {
	if (yanlisdeneme == 1)
	{
		cout << "                \n";
		cout << "                \n";
		cout << "                \n";
		cout << "                \n";
		cout << "                \n";
		cout << "                \n";
		cout << " __             \n";
	}
	else if (yanlisdeneme == 2)
	{
		cout << "                \n";
		cout << "                \n";
		cout << "                \n";
		cout << "                \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 3)
	{
		cout << "                \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 4)
	{
		cout << " __           \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 5)
	{
		cout << " ________     \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 6)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 7)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|       |       \n";
		cout << "|       |       \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 8)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|       |       \n";
		cout << "|       |       \n";
		cout << "|       |       \n";
		cout << "|       |       \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 9)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|       |       \n";
		cout << "|      /|       \n";
		cout << "|       |       \n";
		cout << "|       |       \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 10)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|       |       \n";
		cout << "|      /|\\     \n";
		cout << "|       |       \n";
		cout << "|       |       \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 11)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|       |       \n";
		cout << "|      /|\\     \n";
		cout << "|       |       \n";
		cout << "|      /|       \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
	else if (yanlisdeneme == 12)
	{
		cout << " ________     \n";
		cout << "|      ( )      \n";
		cout << "|       |       \n";
		cout << "|      /|\\     \n";
		cout << "|       |       \n";
		cout << "|      / \\     \n";
		cout << "|               \n";
		cout << "|__             \n";
	}
}
bool harfkontrol(const string& kelime, char tahmin, string& gizlikelime) {
	bool bulundu = false;
	for (int i = 0; i < kelime.length(); i++) {
		if (kelime[i] == tahmin) {
			gizlikelime[i] = tahmin;
			bulundu = true;
		}
	}
	return bulundu;
}
bool oyunKazanildiMi(const string& gizlikelime) {
	return gizlikelime.find('_') == string::npos;
}
int main() {
	string kelime = kelime_sec();
	string gizlikelimestr = gizlikelime(kelime);
	int yanlisdeneme = 0;
	char tahmin;
	bool oyunbitti = false;
	cout << "------------------ ADAM ASMACA OYUNUNA HOSGELDINIZ ------------------" << endl;
	cout << "Kelimeyi tahmin etmeye calisirken lutfen BUYUK HARFLE EDINIZ!!!!!.\n";
	cout << "En fazla 12 yanlis deneme hakkiniz var.\n\n\n";
	while (!oyunbitti) {
		adamasmacagöster(yanlisdeneme);
		cout << "Gizli Kelime: " << gizlikelimestr << endl;
		cout << "Bir harf tahmini grin: ";
		cin >> tahmin;
		if (!harfkontrol(kelime, tahmin, gizlikelimestr)) {
			yanlisdeneme++;
			cout << "Yanlis tahmin!";
		}
		if (oyunKazanildiMi(gizlikelimestr)) {
			cout << "Tebrikler dogru tahmin ettiniz!" << kelime << endl;
			oyunbitti = true;
		}
		else if (yanlisdeneme == 12) {
			adamasmacagöster(yanlisdeneme);
			cout << "Cok fazla yanlis deneme yaptiniz, OYUN BITTI!" << endl << endl;
			cout << "Kelime: " << kelime << endl;
			oyunbitti = true;
		}
	}

	return 0;
 }
