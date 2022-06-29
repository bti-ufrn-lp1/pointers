#ifndef MUSICA_H
#define MUSICA_H

#include <string>
using std::string;

class Musica {
    private:
    string titulo;

    public:
    Musica(string t) : titulo(t) {}
    string getTitulo() {
        return titulo;
    }
    void setTitulo(string t) {
        titulo = t;
    }
};

#endif