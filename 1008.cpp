#include<clocale>
#include<iomanip>
#include<iostream>
using namespace std;

int main (){
	float numero,horastra,valorporhora, salario;
	cout<<"digite o numero do fucionario";
	cin>>numero;
	cout<<"digite a quantidade de horas trabalhadas do fucionario";
	cin>>horastra;
	cout<<"digite o valor por horas do fucionario";
	cin>>valorporhora;

	cout<<"O salario do trabalhado = "<<"R$"<<horastra*valorporhora<<setprecision(2)<<endl;
	return 0;
	
	
}
