#include <memory>
using std::make_unique;
using std::unique_ptr;

#include <iostream>
using std::cout;
using std::endl;

#include <utility>
using std::move;

#include "musica.h"

void printPosicaoYT(int posicao, unique_ptr<Musica> &musica) {
    cout << "Top #" << posicao << " on YouTube: " << musica->getTitulo() << endl;
}

int main() {
    unique_ptr<Musica> top1yt(new Musica("Baby Shark Dance"));
    unique_ptr<Musica> top2yt = make_unique<Musica>("Despacito");

    printPosicaoYT(1, top1yt);
    printPosicaoYT(2, top2yt);
    
    return 0;
}
