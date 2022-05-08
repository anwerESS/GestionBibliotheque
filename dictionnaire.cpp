#include "dictionnaire.h"

Dictionnaire::Dictionnaire(const string &langue, int num_enregistrement, const string &titre) : Document(num_enregistrement, titre),
    langue(langue)
{}

const string &Dictionnaire::getLangue() const
{
    return langue;
}

const string Dictionnaire::toString() const
{
    stringstream ss;
    ss << "NUMERO ENREGISTREMENT : " << getNumEnregistrement() << '\n';
    ss << "TITRE : " << getTitre() << '\n';
    ss << "LANGUE : " << getLangue() << "\n\n\n";
    string description = ss.str();
    return description;
}
