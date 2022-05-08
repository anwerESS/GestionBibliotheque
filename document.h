#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Document
{
protected:
    Document(int num_enregistrement, string titre);

public:
    virtual const string toString() const = 0;

    int getNumEnregistrement() const;
    const string &getTitre() const;

protected:
    int num_enregistrement;
    string titre;
};

#endif // DOCUMENT_H
