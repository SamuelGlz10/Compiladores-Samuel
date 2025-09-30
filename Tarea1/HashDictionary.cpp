// Incluye la librería estándar de entrada/salida
#include <iostream>
// Incluye la librería para usar unordered_map (diccionario hash)
#include <unordered_map>
// Incluye la librería para usar strings
#include <string>
// Incluye la librería para usar stack
#include <stack>

using namespace std;

// Función que valida si una cadena de paréntesis es válida
bool isValid(const string& s) {
    stack<char> st;
    unordered_map<char, char> hashmap = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for (char c : s) {
        if (hashmap.count(c)) {
            if (!st.empty() && st.top() == hashmap[c]) {
                st.pop();
            } else {
                return false;
            }
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main(){

    // Ejemplo de uso de isValid
    string test1 = "()[]{}";
    string test2 = "(]";
    cout << "La cadena '" << test1 << "' es ";
    cout << (isValid(test1) ? "valida" : "invalida") << endl;
    cout << "La cadena '" << test2 << "' es ";
    cout << (isValid(test2) ? "valida" : "invalida") << endl;

    return 0;
}