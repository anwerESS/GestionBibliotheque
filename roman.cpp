#include "roman.h"

Roman::Roman(Prix prix, const string &auteur, int num_pages, int num_enregistrement, const string &titre) :
    Livre(auteur, num_pages, num_enregistrement, titre),
    prix(prix)
{}


Prix Roman::getPrix() const
{
    return prix;
}

const string Roman::toString() const
{
    stringstream ss;
    ss << "NUMERO ENREGISTREMENT : " << getNumEnregistrement() << '\n';
    ss << "TITRE : " << getTitre() << '\n';
    ss << "AUTEUR : " << getAuteur() << '\n';
    ss << "NUMERO PAGES : " << getNumPages() << '\n';
    switch (prix) {
    case RIEN :
        ss << "PRIX : " << "" << '\n';
        break;
    case GONCOURT :
        ss << "PRIX : " << "GONCOURT" << "\n\n\n";
        break;
    case MEDICIS :
        ss << "PRIX : " << "MEDICIS" << "\n\n\n";
        break;
    case INTERALLIE:
        ss << "PRIX : " << "INTERALLIE" << "\n\n\n";
        break;
    case AUTRE:
        ss << "PRIX : " << "AUTRE" << "\n\n\n";
        break;
    }
    string description = ss.str();
    return description;
}
