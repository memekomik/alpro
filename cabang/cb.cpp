#include <iostream>

using namespace std;

int main(){
	
	int suhu;
	cout<<"Program menentukan wujud air"<<endl;
	cout<<"\nMasukkan suhu:";
	cin>>suhu;
	
	if (suhu<=0){
		
		cout<<"\nAir berwujud beku";
		
	}
	
	else if (suhu>0&&suhu<=100){
		
		cout<<"\nAir berwujud cair";
		
	}
	
	else {
		
		cout<<"\nAir berwujud uap";
	}
	
	return 0;
}
