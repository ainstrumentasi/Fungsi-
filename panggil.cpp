#include <iostream>
#include "pakel.h"
using namespace std;
int main(){
	int a , b, c;
	tulisan();
	cout <<"masukkan bangun datar "<<endl;
	cin>>a;
	switch (a)
	{
		case 1:
			{
				cout <<"masukkan alasnya ";
				cin>>b;
				cout <<"masukkan tingginya";
				cin>>c;
				cout <<"luas segitiga : ";
				L_segitiga(b,c);
				break;
			}
		case 2:
		{
			cout <<"masukkan sisi 1 ";
				cin>>b;
				cout <<"masukkan sisi 2";
				cin>>c;
				cout <<"luas persegi : "<<persegi(b,c);
				break;
			}
			case 3:
			{
				cout <<"masukkan jari jari  ";
				cin>>b;
				cout <<"luas lingkaran : "<<lingkaran(b);
				break;
			}
			
	}
}

