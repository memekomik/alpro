#include <iostream>


using namespace std;

int main(){
	int TT,t1,t2,t3;
	
	cout<<"Masukkan tahanan 1:";
	cin>>t1;
	cout<<"Masukkan tahanan 2:";
	cin>>t2;
	cout<<"Masukkan tahanan 3:";
	cin>>t3;
	
	TT=t1+t2+t3;
	
	if(t1<0||t2<0||t3<0){
	cout<<"Ulangi input tahanan, pastikan tidak berupa bilangan negatif";
	}
	
	else{
		cout<<"Hasil tahanan total:"<<TT<<endl;
	}
	
	return 0;
	
}
