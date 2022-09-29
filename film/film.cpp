#include <iostream>

using namespace std;

int usia,tiket,tHarga,uang,kembalian;
char film;

int main(){
	
	//harga tiket Film anak-anak
	int ha=40000;
	//harga tiket film remaja
	int hr=45000;
	//harga tiket film dewasa
	int hd=55000;
	
	cout<< "--------------PROGRAM HARGA TIKET BIOSKOP XXII--------------"<<endl;
	cout<< "\nDaftar Film Tayang Hari Ini \n";
	cout<<"1. Frozen"<<endl;
	cout<<"2. Minion"<<endl;
	cout<<"3. Dilan"<<endl;
	cout<<"4. Mencuri Raden Saleh"<<endl;
	cout<<"5. John Wick"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	
	cout<<"\nMasukkan usia anda: ";
	cin>> usia;
	
	
	if (usia>=0&&usia<=12){
		
		cout<<"Film yang dapat anda tonton adalah: \n";
		cout<<"1. Frozen \n2. Minion"<<endl;
		
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
	
	return 0;
}
