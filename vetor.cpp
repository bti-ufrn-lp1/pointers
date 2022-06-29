#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::unique_ptr;

#include <utility>
using std::make_unique;

#define SIZE 20

int main() {
    unique_ptr<int[]> vetor = make_unique<int[]>(SIZE);
    for (int i = 0; i < SIZE; i++) vetor[i] = i + 1;
    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
