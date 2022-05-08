#ifndef MANUEL_H
#define MANUEL_H

#include "livre.h"

class Manuel : public Livre
{
public:
    Manuel(int niveau_scolaire, const string &auteur, int num_pages, int num_enregistrement, const string &titre);
    const string toString() const;

private:
    int niveau_scolaire;
};

#endif // MANUEL_H
