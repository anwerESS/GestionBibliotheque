#include "testdocuments.h"

TestDocuments::TestDocuments()
{

}

void TestDocuments::test()
{
    cout << "============== TestDocuments::test() ==============\n";
    // creation Roman
    Roman roman(Prix::GONCOURT, "Victor Hugo", 103, 1001, "Roman 1");
    // creation Manuel
    Manuel manuel(3, "André Malraux",  201, 1002, "Manuel 1");
    // creation Revue
    Revu revu(5, 2005, 1003, "Revu 1");
    // creation Dictionnaire
    Dictionnaire dict("Anglais", 1004, "Dictionnaire 1");

    // Afficher Roman
    cout << roman.toString();
    // Afficher Manuel
    cout << manuel.toString();
    // Afficher Revue
    cout << revu.toString();
    // Afficher Dictionnaire
    cout << dict.toString();

}
