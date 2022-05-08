#include "livre.h"

const string &Livre::getAuteur() const
{
    return auteur;
}

int Livre::getNumPages() const
{
    return num_pages;
}

Livre::Livre(const string &auteur, int num_pages, int num_enregistrement, const string &titre) :
    Document(num_enregistrement, titre),
    auteur(auteur),
    num_pages(num_pages)
{
}
