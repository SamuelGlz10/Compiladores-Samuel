#include <iostream>
using namespace std;

// Estructura del nodo
class Node {
public:
    int data;
    Node* next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Implementación de pila (stack) usando lista enlazada
class myStack {
    Node* top;
    
    // Para almacenar el tamaño actual de la pila
    int count;
    
public:
    myStack() {
        // Inicialmente la pila está vacía
        top = NULL;
        count = 0;
    }

    // Operación push (insertar elemento en la pila)
    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        
        count++;
    }

    // Operación pop (eliminar elemento de la pila)
    int pop() {
        if (top == NULL) {
            cout << "Desbordamiento de pila (Stack Underflow)" << endl;
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int val = temp->data;
        
        count--;
        delete temp;
        return val;
    }

    // Operación peek (ver el elemento superior sin eliminarlo)
    int peek() {
        if (top == NULL) {
            cout << "La pila está vacía" << endl;
            return -1;
        }
        return top->data;
    }

    // Verificar si la pila está vacía
    bool isEmpty() {
        return top == NULL;
    }

    // Obtener el tamaño actual de la pila
    int size() {
        return count;
    }

    // Mostrar la pila con flechas
    void display() {
        if (top == NULL) {
            cout << "La pila está vacía" << endl;
            return;
        }
        Node* temp = top;
        cout << "TOP -> ";
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    myStack st;

    // Insertar elementos en la pila
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // Mostrar pila antes del pop
    cout << "Pila antes del pop:" << endl;
    st.display();

    // Eliminar un elemento de la pila
    cout << "Elemento eliminado: " << st.pop() << endl;

    // Mostrar pila después del pop
    cout << "Pila despues del pop:" << endl;
    st.display();

    // Consultar el elemento superior
    cout << "Elemento superior: " << st.peek() << endl;

    return 0;
}
