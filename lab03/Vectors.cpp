#include <iostream>
#include <iomanip>
#include <cmath>

#include "lab03.h"

using namespace std;

int Vector3::licznik = 0;

Vector3::Vector3(float x, float y, float z) : wektor( new float[3] ){
	cout<<"Konstruktor V3 obiekt #"<<licznik<<endl;
	wektor[0] = x;
	wektor[1] = y;
	wektor[2] = z;
	wartoscWektora = sqrt( pow(x,2) + pow(y,2) + pow(z,2) );
}

Vector3::~Vector3(){
	//cout<<"Destruktor V3"<<endl;
	delete [] wektor;

}

Vector3* Vector3::Factory(float x, float y, float z){
	licznik++;
	Vector3* v3 = new Vector3(x, y, z);
	return v3;

}

void Vector3::Times(const VectorTrans3& speedTrans) const{
	cout<<"\nILOCZYN SKALARNY"<<endl;
	cout<<wektor[0]<<endl
		<<wektor[1]<<endl
		<<wektor[2]<<endl;
	cout<<"X"<<endl;
	cout<<speedTrans.wektorT[0][0]
		<<setw(5)<<speedTrans.wektorT[1][0]
		<<setw(5)<<speedTrans.wektorT[2][0] << endl;
	cout<<wektor[0]*speedTrans.wektorT[0][0] + wektor[1]*speedTrans.wektorT[1][0] + wektor[2]*speedTrans.wektorT[2][0]<<endl;
}


////////////////////////////////
VectorTrans3::VectorTrans3(float x, float y, float z){
	//cout<<"Konstruktor VT3"<<endl;
	wektorT = new float*[3];
	wektorT[0] = new float(x);
	wektorT[1] = new float(y);
	wektorT[2] = new float(z);

}
VectorTrans3::~VectorTrans3(){
	//cout<<"Destruktor VT3"<<endl;
	delete wektorT[0];
	delete wektorT[1];
	delete wektorT[2];
	delete [] wektorT;
}
void VectorTrans3::Times(const Vector3& speed) const{
	cout<<"\nMACIERZ"<<endl;
	cout<<wektorT[0][0]
		<<setw(5)<<wektorT[1][0]
		<<setw(5)<<wektorT[2][0] << endl;
	cout<<"X"<<endl;
	cout<<speed.wektor[0]<<endl
		<<speed.wektor[1]<<endl
		<<speed.wektor[2]<<endl;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<< speed.wektor[i] * wektorT[j][0] << "	   ";
		}
		cout<< endl;
	}
	
}
