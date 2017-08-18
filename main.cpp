#include <string>//nesecitaremos esta libreria para usar los metodos para la string
#include <string>//nesecitaremos esta libreria para usar los metodos para la string

using namespace std;

int main() {
	string nombre,serial; //declaramos variable
	cout<<"ingresa tu nombre: "<<endl;
	cin>>nombre;
	
	// aca haremos el bucle para que ponga nuestro nombre al revez ,como pueden ver restaremos 1 al largo por que es null al final
	for(int i=nombre.length()-1;i>=0;i--){
		
		serial = serial + nombre[i]; // guardaremos en la variable serial el resultado
		
	}	
	
	cout<<"tu serial es: "<<serial<<"-";
	
	// aca haremos otro bucle para que arroje el nombre en su ascii decimal
	for(int i=0;i<=serial.length()-1;i++){
		
    cout<<dec<<(int)serial[i];
	}	
	// ahora lo tenemos amigos disculpen por los problemas tecnicos mi pc no esta buena jejeje
	// nos vemos y saludos de su amigo AbelJM	
}
