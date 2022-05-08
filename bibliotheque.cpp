#include "bibliotheque.h"

Bibliotheque::Bibliotheque(int capacite) : capacite(capacite)
{

}

void Bibliotheque::afficherDocuments()
{
    for (int i = 0; i < list_doc.size(); ++i)
    {
        cout << list_doc[i]->toString();
    }
}

bool Bibliotheque::ajouter(Document * doc)
{
    for (int i = 0; i < list_doc.size(); ++i)
    {
        if(list_doc[i]->getNumEnregistrement() == doc->getNumEnregistrement()) {
            cout << "Numero d'enregistrement deja existe la bibliotheque!\n";
            return false;
        }
    }

    if(list_doc.size() < capacite) {
        list_doc.push_back(doc);
        return true;
    } else {
        cout << "La bibliotheque a atteint sa capacité maximale\n";
        return false;
    }
}

bool Bibliotheque::supprimer(Document  * doc)
{
    int indice_doc = -1;

    for (int i = 0; i < list_doc.size(); ++i)
    {
        if(list_doc[i]->getNumEnregistrement() == doc->getNumEnregistrement()) {
            indice_doc = i;
            list_doc.erase(list_doc.begin() + indice_doc);
            return true;
        }
    }

    cout << "Document n'existe pas dans la bibliotheque!\n";
    return false;
}

bool Bibliotheque::supprimer(int num_enregistrement)
{
    int indice_doc = -1;

    for (int i = 0; i < list_doc.size(); ++i)
    {
        if(list_doc[i]->getNumEnregistrement() == num_enregistrement) {
            indice_doc = i;
            list_doc.erase(list_doc.begin() + indice_doc);
            return true;
        }
    }

    cout << "Document n'existe pas dans la bibliotheque!\n";
    return false;
}
