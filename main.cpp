#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num,contador; // El numero que se pedirá.
    cout << "Introduce un numero" << endl; //Aqui se pide el numero
    cin >> num; //Se lee el numero que quieres;
    vector<int> vNumeros;
    //SE INICIA EL BUCLE FOR PARA RECORRER LOS 100 NUMEROS
    cout << endl;
    for(int i=0; i<100; i++){
        // SE COMPRUEBA SI EL NUMERO ES PAR Y SI CABE EN EL VECTOR UTILIZANDO LA VARIABLE CONTADOR
        if((i%2==0) && contador<num){
            // SI EL NUMERO ES PAR Y CABE EN EL VECTOR (UTLIZANDO PARA COMPROBAR, CONTADOR) SE AÑADE
            vNumeros.push_back(i);
            contador++;
        }
    }

    cout << "Comprobación, se recorrer el vector vNumeros" << endl;
    for(int j=0; j<vNumeros.size(); j++){
        cout << vNumeros[j] << endl;
    }

    return 0;
}
