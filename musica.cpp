#include <memory>
using std::make_unique;
using std::unique_ptr;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

#include "musica.h"

void printPosicaoYT(int posicao, unique_ptr<Musica> musica) {
    cout << "Top #" << posicao << " on YouTube: " << musica->getTitulo() << endl;
}

int main() {
    unique_ptr<Musica> top1yt(new Musica("Baby Shark Dance"));
    printPosicaoYT(1, top1yt);

    unique_ptr<Musica> top2yt = make_unique<Musica>("Despacito");
    printPosicaoYT(2, top2yt);

    return 0;
}