#ifndef ROMAN_H
#define ROMAN_H

#include "livre.h"

enum Prix {
    RIEN        = 0,
    GONCOURT    = 1,
    MEDICIS     = 2,
    INTERALLIE  = 3,
    AUTRE       = 4
};


class Roman : public Livre
{
public:
    Roman(Prix prix, const string &auteur, int num_pages, int num_enregistrement, const string &titre);

    Prix getPrix() const;
    const string toString() const;

private:
    Prix prix;
};

#endif // ROMAN_H
