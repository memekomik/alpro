#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	char pilgender,pilpakp,pilpakw;
	int jeans=150000;
	int celdas=175000;
	int kemeja=200000;
	int kaos=75000;
	int rok=175000;
	int hijab=200000;
	int blouse=250000;
	int cardigan=300000;
	int tbelanja=0;
	int i,n;
	int nomuang,tspajak,kembalian;
	
	cout<<"Program Membeli Baju Pria dan Wanita \n\n";
	cout<<"Pilihan pakaian:\n";
	cout << left << setw(20) << "Pakaian Pria" << left << setw(10) << "Pakaian Wanita\n";
	cout << left << setw(20) << "Jeans" << left << setw(10) << "Rok plisket\n";
	cout << left << setw(20) << "Celana dasar" << left << setw(10) << "Hijab";
	cout << left << setw(20) << "\nKemeja" << left << setw(10) << " Blouse";
	cout << left << setw(20) << "\nKaos polo" << left << setw(10) << " Cardigan\n";
	
	cout<<endl<<"Ketik 1 untuk pria, ketik 2 untuk wanita: ";
	cin>>pilgender;
	
	switch(pilgender){
		case '1':	cout<<"Anda Pria. Pilihan pakaian yang dapat anda beli adalah: \n";
					cout << left << setw(20) << "a. Jeans"<<"\n";
					cout << left << setw(20) << "b. Celana dasar"<<"\n";
					cout << left << setw(20) << "c. Kemeja"<<"\n";
					cout << left << setw(20) << "d. Kaos polo"<<"\n";
					cout<<"Berapa banyak pakaian yang anda ingin beli? Silahkan input jumlahnya: ";
					cin>>n;
					for(i=1;i<=n;i++){
					cout << endl << "Pakaian yang ingin anda beli (input pilihan sesuai list huruf di atas, menggunakan lowercase!!) : ";
					cin >> pilpakp;
						switch (pilpakp){
							case 'a' : tbelanja = tbelanja + jeans;
							break;
							case 'b' : tbelanja = tbelanja + celdas;
							break;
							case 'c' : tbelanja = tbelanja + kemeja;
							break;
							case 'd' : tbelanja = tbelanja + kaos;
							break;
							default  : tbelanja = tbelanja + 0;
							   cout<<"Input tidak valid. Tidak akan dihitung.\n";
							exit(0);
						}
				}
			break;
		
		case '2':	cout<<"Anda Wanita. Pilihan pakaian yang dapat anda beli adalah: \n";
					cout << left << setw(20) << "a. Rok plisket"<<"\n";
					cout << left << setw(20) << "b. Hijab"<<"\n";
					cout << left << setw(20) << "c. Blouse"<<"\n";
					cout << left << setw(20) << "d. Cardigan"<<"\n";
					cout<<"Berapa banyak pakaian yang anda ingin beli? Silahkan input jumlahnya: ";
					cin>>n;
					for(i=1;i<=n;i++){
						cout << endl << "Pakaian yang ingin anda beli (input pilihan sesuai list huruf di atas, menggunakan lowercase!!) : ";
						cin >> pilpakw;
						switch (pilpakw){
							case 'a' : tbelanja = tbelanja + rok;
							break;
							case 'b' : tbelanja = tbelanja + hijab;
							break;
							case 'c' : tbelanja = tbelanja + blouse;
							break;
							case 'd' : tbelanja = tbelanja + cardigan;
							break;
							default  : tbelanja = tbelanja + 0;
						   cout<<"Input tidak valid. Tidak akan dihitung.\n";
							exit(0);
						}
					}
				break;
		}
		
	cout<<"Total belanjaan anda adalah: "<<tbelanja<<endl;
	tspajak=tbelanja*1.1;
	cout<<"Total belanjaan anda setelah pajak adalah: "<<tspajak<<endl;
	cout<<"Masukkan nominal uang anda: ";
	cin>>nomuang;
	kembalian=nomuang-tspajak;
	cout<<"Kembalian anda adalah: "<<kembalian<<endl;
	cout<<"Terimakasih telah berbelanja di toko kami!";
	
	return 0;
	}
