#include<iostream>
#include<clocale>
#include<iomanip>
using namespace std;
int main(){
	float consumomedio,distancia,combustgasto;
	cout<<"digite a distancia percorrida ";
	cin>>distancia;
	cout<<"digite o consumo de combstivel gasto";
	cin>>combustgasto;

	
	cout<<"o consumo medio é "<<distancia/combustgasto<<"km/L"<<setprecision(1)<<endl;

	return 0 ;
	
}
