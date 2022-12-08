#include <iostream>

using namespace std;

int usia,tiket,tHarga,uang,kembalian;
char film;

int main(){
	
	//harga tiket film anak-anak
	int ha=40000;
	//harga tiket film remaja
	int hr=45000;
	//harga tiket film dewasa
	int hd=55000;
	
	cout<< "--------------PROGRAM HARGA TIKET BIOSKOP XXII--------------"<<endl;
	cout<< "\nDaftar Film Tayang Hari Ini \n";
	cout<<"1. Frozen"<<"		"<< "Rp. 40.000;" << endl;
	cout<<"2. Minion"<<"		"<< "Rp. 40.000;" << endl;
	cout<<"3. Dilan"<<"		"<< "Rp. 45.000;" << endl;
	cout<<"4. Mencuri Raden Saleh"<<"		"<< "Rp. 40.000;" << endl;
	cout<<"5. John Wick"<<"		"<< "Rp. 55.000;" << endl;
	cout<<"--------------------------------------------------------------"<<endl;
	
	cout<<"\nMasukkan usia anda: ";
	cin>> usia;
	
	
	if (usia>=0&&usia<=12){
		
		cout<<"Film yang dapat anda tonton adalah: \n";
		cout<<"1. Frozen \n2. Minion"<<endl;
//untuk memvalidasi input, menggunakan for loop agar setiap user yang memasukkan input tidak sesuai, akan terjadi pengulangan input
//sampai didapatkan input yang sesuai
		for (;;)
		{
		cout<<"Pilihan film anda (masukan nomor film): ";
		cin>>film;
		
		switch (film){
			case '1' :	cout<<"Anda memilih film Frozen. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*ha;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
					
			case '2' :	cout<<"Anda memilih film Minion. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*ha;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
			default  :	cout<<"Bukan pilihan yang valid, silahkan pilih film sesuai nomor."<<endl;
					continue;
			}
		break;
		}
	}
	
	else if (usia>=13&&usia<=16){
		
		cout<<"Film yang dapat anda tonton adalah: \n";
		cout<<"1. Frozen \n2. Minion \n3. Dilan \n4. Mencuri Raden Saleh"<<endl;
		for (;;)
		{
		cout<<"Pilihan film anda (masukan nomor film): ";
		cin>>film;
		
		switch (film){
			case '1' :	cout<<"Anda memilih film Frozen. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*ha;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
					
			case '2' :	cout<<"Anda memilih film Minion. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*ha;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
			case '3' :	cout<<"Anda memilih film Dilan. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*hr;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
					
			case '4' :	cout<<"Anda memilih film Mencuri Raden Saleh. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*hr;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
			default  :	cout<<"Bukan pilihan yang valid, silahkan pilih film sesuai nomor."<<endl;
					continue;
			}
		break;
		}
	}
	
	else{
		
		cout<<"Film yang dapat anda tonton adalah: \n";
		cout<<"1. Frozen \n2. Minion \n3. Dilan \n4. Mencuri Raden Saleh \n5. John Wick"<<endl;
		for (;;)
		{
		cout<<"Pilihan film anda (masukan nomor film): ";
		cin>>film;
		
		switch (film){
			case '1' :	cout<<"Anda memilih film Frozen. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*ha;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
					
			case '2' :	cout<<"Anda memilih film Minion. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*ha;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
			case '3' :	cout<<"Anda memilih film Dilan. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*hr;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
					
			case '4' :	cout<<"Anda memilih film Mencuri Raden Saleh. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*hr;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
			case '5' :	cout<<"Anda memilih film John Wick. \nSilahkan masukkan jumlah tiket yang anda ingin pesan: ";
						cin>>tiket;
						tHarga = tiket*hd;
						cout<<"\nTotal biaya tiket yang anda pesan sebesar: "<<tHarga<<endl;
					break;
			default  :	cout<<"Bukan pilihan yang valid, silahkan pilih film sesuai nomor."<<endl;
					continue;
			}
		break;
		}
	}
//menggunakan while do untuk mengecek apakah uang user sesuai atau melebihi total biaya tiket, jika sesuai ditampikan kembalian
//jika kembalian minus, maka user akan diminta untuk menginput hingga sesuai atau melebihi total biaya tiket
	do{
	cout<<"Masukkan nominal uang: ";
	cin>>uang;
	kembalian = uang-tHarga;
	
	if (kembalian<0){
		cout<<"Uang anda kurang, silahkan bayar sesuai tagihan atau lebih untuk mendapat kembalian.\n";
		}
	}
	while(kembalian<0);
		
		cout<<"Kembalian anda adalah: "<<kembalian<<endl;
		cout<<"Terimakasih telah memesan tiket di Bioskop XXII. Selamat menonton!";
	
	return 0;
}
