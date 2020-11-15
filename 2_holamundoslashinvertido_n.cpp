//Primer programa c++

# include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h>//Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería estándar y colocamos el valor de manejo de caracteres

cout<<"Soy Emilio Carcaño y estoy orgulloso de pertenecer a Uninaciones\n";//Imprimimos el mensaje en pantalla, \n inserta un salto de línea
cout<<" y estudiar en la UNAM"<<endl;//Imprimimos un mensaje, endl inserta un salto de línea y vacía el buffer

return 0;//Finalizamos el programa
}


