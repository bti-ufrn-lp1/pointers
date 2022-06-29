#include <iostream>
using std::cout;
using std::endl;

#define SIZE 20

int main() {
    int* vetor = new int[SIZE];
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = i+1;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}