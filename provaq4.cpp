#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float n1,n2,n3,maior,menor;
	cout<<"digite os numeros";
	cin>> n1>>n2>>n3;
	if(n1>n2) {
	
	if(n1>n3)  {
	maior=n1;
	 }  else  {
	 maior=n3;}
	if(n3>n2)  {menor=n2;} else  { menor=n3;} }else { if (n2>n3) {
		maior=n2; } else { maior=n3;  } if(n1>n3) {	menor=n3; } else { menor=n1;}	
		cout<< "maoir="<<maior<<endl;
		cout<<"menor"<<menor<<endl;
	}
	return 0;
}
