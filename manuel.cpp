#include "manuel.h"

Manuel::Manuel(int niveau_scolaire, const string &auteur, int num_pages, int num_enregistrement, const string &titre) : Livre(auteur, num_pages, num_enregistrement, titre),
    niveau_scolaire(niveau_scolaire)
{}

const string Manuel::toString() const
{
    stringstream ss;
    ss << "NUMERO ENREGISTREMENT : " << getNumEnregistrement() << '\n';
    ss << "TITRE : " << getTitre() << '\n';
    ss << "AUTEUR : " << getAuteur() << '\n';
    ss << "NUMERO PAGES : " << getNumPages() << '\n';
    ss << "NIVEAU SCOLAIRE : " << getNumPages() << "\n\n\n";
    string description = ss.str();
    return description;
}

