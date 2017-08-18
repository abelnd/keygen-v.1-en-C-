#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string nombre,serial;
	cout<<"ingresa tu nombre: "<<endl;
	cin>>nombre;
	for(int i=nombre.length()-1;i>=0;i--){
		
		serial= serial + nombre[i];	
	}
	
	cout<<serial;
	

	
	
	return 0;
}
