#include "document.h"

Document::Document(int num_enregistrement, string titre)
    : num_enregistrement(num_enregistrement),
    titre(titre)
{}

int Document::getNumEnregistrement() const
{
    return num_enregistrement;
}

const string &Document::getTitre() const
{
    return titre;
}
