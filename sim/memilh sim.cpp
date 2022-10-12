#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char sim,pilmen;
	
	cout<<"Program Membuat dan Memperpanjang SIM\n";
	cout<<"Pilihan menu:\n";
	cout << left << setw(20) << "Jenis SIM" << internal << setw(20) << "Status Pembuatan\n";
	cout << left << setw(20) << "A" << internal << setw(20) << "Pembuatan Baru[1]\n";
	cout << left << setw(20) << "A" << internal << setw(20) << "Perpanjangan[2]\n";
	cout << left << setw(20) << "C" << internal << setw(20) << "Pembuatan Baru[1]\n";
	cout << left << setw(20) << "C" << internal << setw(20) << "Perpanjangan[2]\n";
	
	for(;;){
	cout<<"Masukkan jenis sim: ";
	cin>>sim;
	
	if(sim=='A'||sim=='a'){
		for(;;){
		cout<<"Tekan '1' untuk pembuatan baru, tekan '2' untuk memperpanjang: ";
		cin>>pilmen;
		
		switch(pilmen){
			case '1':cout<<"Biaya Rp175.000.-";
			break;
			case '2':cout<<"Biaya Rp150.000,-";
			break;
			default :cout<<"Status pembuatan salah.";
			continue;
			}
			break;
		}
	}
	
	else if(sim=='C'||sim=='c'){
		for(;;){
		cout<<"Tekan '1' untuk pembuatan baru, tekan '2' untuk memperpanjang: ";
		cin>>pilmen;
		
		switch(pilmen){
			case '1': cout<<"Biaya Rp155.000,-";
			break;
			case '2': cout<<"Biaya Rp130.000,-";
			break;
			default : cout<<"Status pembuatan salah.";
			continue;
			}
			break;
		}
	}
	
	else {
		cout<<"Input sim anda salah."<<endl;
		continue;
	}
	break;
}
	return 0;
	
}
