#include <iostream> //program void dan nonvoid
#include <stdio.h>
using namespace std; 

void L_segitiga(int a , int b);
float persegi (int a , int b);
float lingkaran (int r);
void tulisan ();
int main(){
	tulisan();
	int w=persegi(3,4);//non void bisa dimasukkan kedalam variabel
	cout <<"luas segitiga ";
	 L_segitiga(2,4); //void tidak bisa dimasukkan kedalam variable
	//L_segitiga(2,4); //mengakses fungsi void tidak disebelahnya ternyata:")
	cout <<endl <<"luas persegi "<<w;//mengakses fungsi non void 
	cout <<endl <<"luas lingkaran "<<lingkaran(7);
} 

void L_segitiga(int a , int b)
{
	int luas = (a *b)/2;
	cout << luas;
}

void tulisan ()
{
	cout <<" bangun datar "<<endl;
	cout <<"1. segitiga"<<endl;
	cout <<"2. persegi"<<endl;
	cout <<"3. lingkaran "<<endl;
}

float persegi (int a , int b)
{
	int luas2 = (a*b);
	return (luas2);
}

float lingkaran (int r)
{
	float phi=3.14 ;
	float luas3 = phi*r*r;
	return (luas3); 
}

