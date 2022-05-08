#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <vector>
#include "document.h"

using namespace std;

class Bibliotheque
{
public:
    Bibliotheque(int capacite);

    void afficherDocuments();
    bool ajouter(Document  * doc);
    bool supprimer(Document * doc);
    bool supprimer(int num_enregistrement);

private:
    int capacite;
    vector <Document *> list_doc;
};

#endif // BIBLIOTHEQUE_H
