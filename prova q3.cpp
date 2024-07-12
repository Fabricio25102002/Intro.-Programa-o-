#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string nome,condicao;
	int idade;
	cout<< "diga o nome";
	cin>> nome;
	cout<<"sua idade";
	cin>> idade;
	if(idade<18){ condicao="menor de idade";
	} else { 
	  if(idade<60){
	condicao="adulto";
	}else {  
	 
	  condicao= "idoso";
	}
	}
	
	cout<<"e"<< condicao;
		
	
	
	
	
	
	

	
	
	
	
	
	
	
		return 0;
}
