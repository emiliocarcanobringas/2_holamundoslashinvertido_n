//Primer programa c++

# include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h>//Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a est�ndar y colocamos el valor de manejo de caracteres

cout<<"Soy Emilio Carca�o y estoy orgulloso de pertenecer a Uninaciones\n";//Imprimimos el mensaje en pantalla, \n inserta un salto de l�nea
cout<<" y estudiar en la UNAM"<<endl;//Imprimimos un mensaje, endl inserta un salto de l�nea y vac�a el buffer

return 0;//Finalizamos el programa
}


