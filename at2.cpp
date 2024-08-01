#include <iostream>

using namespace std;
int main(int argc, char** argv){

	int a [6]= {23,12,30,12,23,80};
   int maior,menor;
	maior=-999999999;
	menor=9999999999;
	for (int x=0; x<6; x++)  {
if(a   [x] < menor)  {  menor = a  [x];

}
 
 if(a  [x] > maior)  { 
  maior = a  [x];
}
		cout<<"maior"<<maior<<endl;
		cout<<"menor"<<menor<<endl;
	
	
	
	
	
	return 0;
}}
