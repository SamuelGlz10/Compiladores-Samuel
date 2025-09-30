#include <iostream>
#include <queue>
using namespace std;

int main() {
    //Declaracion de queue
    queue<int>q;
    q.push(10);
    q.push(5);
    q.push(15);
    q.push(20);
    
    //Revisando el elemento frontal y trasero
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;
    //RRemoviendo el primer elemento con un pop
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;

    // Mostrar todos los elementos del queue separados por ->
    cout << "Queue elements: ";
    queue<int> tempQ = q; // Copia para no modificar el original
    while (!tempQ.empty()) {
        cout << tempQ.front();
        tempQ.pop();
        if (!tempQ.empty()) cout << " -> ";
    }
    cout << endl;

    return 0;
}