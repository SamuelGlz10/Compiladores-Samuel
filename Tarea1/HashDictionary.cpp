// Incluye la librería estándar de entrada/salida
#include <iostream>
// Incluye la librería para usar unordered_map (diccionario hash)
#include <unordered_map>
// Incluye la librería para usar strings
#include <string>

using namespace std;

int main(){
    // Declaración de un unordered_map que asocia enteros con strings
    unordered_map<int, string> hashMap;
    // Inicialización del hashMap con algunos valores
    hashMap = {
        {1, "uno"},
        {2, "dos"},
        {3, "Samuel"},
        {4, "Gonzalez"},
        {5, "Vazquez"}
    };

    // Imprime todos los elementos del hashMap
    cout << "Elementos en el hashMap:" << endl;
    for (const auto& pair : hashMap) {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}