#ifndef LIVRE_H
#define LIVRE_H

#include "document.h"

class Livre : public Document
{
protected:
    Livre(const string &auteur, int num_pages, int num_enregistrement, const string &titre);

public:
    virtual const string toString() const = 0;

    const string &getAuteur() const;
    int getNumPages() const;

protected:
    string auteur;
    int num_pages;
};

#endif // LIVRE_H
