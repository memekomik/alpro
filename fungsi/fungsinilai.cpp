#include <iostream>
using namespace std;

string rentangNilai (int x);

int main () {
	int nilai;
	string nilaiHuruf;
	
	cout << "Masukkan nilai anda: ";
	cin >> nilai;
	
	nilaiHuruf = rentangNilai(nilai);
	cout << "Predikat anda adalah: " << nilaiHuruf << endl;
	
	cin.get();
	return 0;

}

string rentangNilai (int x){
	string y;
	if (x >= 76) {
		y = "A";
		}
	else if (x < 76 &&  x >= 71) {
		y = "B+";
		}
	else if (x < 71 && x >= 66) {
		y = "B";
		}
	else if (x < 66 && x >= 61) {
		y = "C+";
		}
	else if (x < 61 && x >= 5) {
		y = "C";
		}
	else if (x < 56 && x >= 51) {
		y = "D";
		}
	else if (x < 51 && x >= 0) {
		y = "E";
		}
	else {
		y = "bukan merupakan nilai yang valid.";
		}
	return y;
}
