#include <iostream>

using namespace std;

int b1,b2,b3,tBelanja,diskon,kembalian,uang;

int main(){
	cout<<"Program menghitung diskon buku\n";
	cout<<"masukkan harga buku 1:";
	cin>>b1;
	cout<<"masukkan harga buku 2:";
	cin>>b2;
	cout<<"masukkan harga buku 3:";
	cin>>b3;
	
	tBelanja = b1+b2+b3;
	cout<<"total belanjaan buku anda adalah:"<<tBelanja<<endl;
	
	if (tBelanja <=100000){
		diskon = tBelanja;
		cout<<"Total belanjaan setelah diskon adalah: " <<diskon<<endl;
        }
        
	else if (tBelanja > 100000){
		diskon = tBelanja*(1-0.07);
		cout<<"Total belanjaan setelah diskon adalah: " <<diskon<<endl;
		}
		
	else if ((tBelanja >= 150000)&&(tBelanja <= 250000)){
		diskon = tBelanja*(1-0.1);
		cout<<"Total belanjaan setelah diskon adalah: " <<diskon<<endl;
		}
		
	 else {
		diskon = tBelanja*(1-0.12);
		cout<<"Total belanjaan setelah diskon adalah: " <<diskon<<endl;
		}
		
	while(diskon>0){
	cout<<"Masukkan nominal uang: ";
	cin>>uang;
	kembalian = uang-diskon;
	cout<<"Kembalian anda adalah: "<<kembalian<<endl;
	break;
	}
	
	return 0;
	
}
