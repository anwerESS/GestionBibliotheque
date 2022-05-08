#include "revu.h"

Revu::Revu(int mois, int annee, int num_enregistrement, const string &titre) : Document(num_enregistrement, titre),
    mois(mois),
    annee(annee)
{}

int Revu::getMois() const
{
    return mois;
}

int Revu::getAnnee() const
{
    return annee;
}

const string Revu::toString() const
{
    stringstream ss;
    ss << "NUMERO ENREGISTREMENT : " << getNumEnregistrement() << '\n';
    ss << "TITRE : " << getTitre() << '\n';
    ss << "DATE PUBLICATION : " << getMois() << '/' << getAnnee() << "\n\n\n";
    string description = ss.str();
    return description;
}
