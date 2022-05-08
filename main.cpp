#include <iostream>

#include "roman.h"
#include "manuel.h"
#include "revu.h"
#include "dictionnaire.h"
#include "testdocuments.h"
#include "bibliotheque.h"
using namespace std;

int main()
{
    // A
    TestDocuments testDoc;
    testDoc.test();


    // C
    cout << "\n\n**************************************************\n";
    cout << "================== Bibliotheque ==================\n";
    cout << "**************************************************\n";
    // creation Bibliotheque et Documents
    Bibliotheque bib(10);
    Roman roman_1(Prix::GONCOURT, "Victor Hugo", 103, 1001, "Roman 1");
    Roman roman_2(Prix::GONCOURT, "André Malraux", 209, 1002, "Roman 2");
    Roman roman_3(Prix::GONCOURT, "Alexandre Dumas", 98, 1003, "Roman 3");

    Manuel manuel_1 (3, "Jean Jacques Rousseau",  347, 1004, "Manuel 1");
    Manuel manuel_2 (2, "Émile Zola",  201, 1005, "Manuel 2");

    Revu revu_1 (5, 2005, 1006, "Revu 1");
    Revu revu_2 (3, 2017, 1007, "Revu 2");

    Dictionnaire dict_1 ("Anglais", 1008, "Dictionnaire 1");
    Dictionnaire dict_2 ("Francais", 1009, "Dictionnaire 2");
    Dictionnaire dict_3 ("Italien", 1010, "Dictionnaire 3");
    Dictionnaire dict_4 ("Arabe", 1011, "Dictionnaire 4");

    // Ajouter Documents
    cout << "\n\n============== Ajouter Documents ==============\n";
    bool res;
    res = bib.ajouter(&roman_1);    // TRUE
    cout << boolalpha << "bib.ajouter(&roman_1) : " << res << "\n\n";
    res = bib.ajouter(&roman_1);    // FALSE (document deja existe)
    cout << "bib.ajouter(&roman_1) : " << res << "\n\n";
    res = bib.ajouter(&roman_2);    // TRUE
    cout << "bib.ajouter(&roman_2) : " << res << "\n\n";
    res = bib.ajouter(&roman_3);    // TRUE
    cout << "bib.ajouter(&roman_3) : " << res << "\n\n";
    res = bib.ajouter(&manuel_1);   // TRUE
    cout << "bib.ajouter(&manuel_1) : " << res << "\n\n";
    res = bib.ajouter(&manuel_2);   // TRUE
    cout << "bib.ajouter(&manuel_2) : " << res << "\n\n";
    res = bib.ajouter(&revu_1);     // TRUE
    cout << "bib.ajouter(&revu_1) : " << res << "\n\n";
    res = bib.ajouter(&revu_2);     // TRUE
    cout << "bib.ajouter(&revu_1) : " << res << "\n\n";
    res = bib.ajouter(&dict_1);     // TRUE
    cout << "bib.ajouter(&dict_1) : " << res << "\n\n";
    res = bib.ajouter(&dict_2);     // TRUE
    cout << "bib.ajouter(&dict_2) : " << res << "\n\n";
    res = bib.ajouter(&dict_3);     // TRUE
    cout << "bib.ajouter(&dict_3) : " << res << "\n\n";
    res = bib.ajouter(&dict_4);     // FALSE (capacite maximale)
    cout << "bib.ajouter(&dict_4) : " << res << "\n\n";

    // Affichage avant suppression
    cout << "\n\n============== Affichage avant suppression ==============\n";
    bib.afficherDocuments();

    // suppression
    cout << "\n\n============== Suppression ==============\n";
    res = bib.supprimer(&roman_1);     // TRUE
    cout << "bib.supprimer(&roman_1) : " << res << "\n\n";
    res = bib.supprimer(&roman_1);     // FALSE (document n'existe pas)
    cout << "bib.supprimer(&roman_1) : " << res << "\n\n";
    res = bib.supprimer(&roman_2);     // TRUE
    cout << "bib.supprimer(&roman_2) : " << res << "\n\n";
    res = bib.supprimer(&roman_3);     // TRUE
    cout << "bib.supprimer(&roman_3) : " << res << "\n\n";

    // Affichage apres suppression
    cout << "\n\n============== Affichage apres suppression ==============\n";
    bib.afficherDocuments();


    return 0;
}
