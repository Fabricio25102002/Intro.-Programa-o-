#include <iostream>

using namespace std;

int main() {
	float n1,n2,n3,maior,menor;
	cout<< "digite as notas"<<endl;
	cin>> n1 >> n2>>n3; 

	
//	if (media>=7){ cout<< "aprovado";
//	} else  {cout<< "reprovado";
//	}
 
// if(media>=7){cout<< "aprovado"<<endl;}
// else{cout<< "reprovado";}

//de 0 a 2 e E;   DE 2.1 a 4 e D;    de 4.1 a 6 e C;   DE 6.1 a 8 e B;    de 8.1 a 10 e A;

// if (media<2.1) {cout<<"e"<<endl;}
// else {if(media<4.1) {cout<<"d"<<endl;}
 //else {if(media<6.1) {cout<<"c"<<endl;}
 //else {if(media<8.1) {cout<<"b"<<endl;}
 //  else {if(media=10) {cout<<"a"<<endl;}
// }
if(n1>n2)  {maior=n1; }
else {}
if(n1<n2) {menor=n1;}
 else {}
 if(n1>n3) {maior=n1;}
 else {maior=n3;}
 if (n1<n3) {menor=n1;}
 else {}
 if(n2>n3) {maior=n2;}
 else {maior=n3;}
 if(n2<n3) {menor=n2;}
 else {menor=n3;}
 cout<<"menor="<<menor<<endl;
 cout<<"maoir="<<maior<<endl;
	
	
	
	
	
	
	
	return 0; }
