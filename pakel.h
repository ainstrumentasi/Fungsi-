#include <iostream> //header
#include <stdio.h>
using namespace std; 

void L_segitiga(int a , int b)
{
	int luas = (a *b)/2;
	cout << luas;
}

void tulisan ()
{
	cout <<" pilih bangun datar "<<endl;
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

