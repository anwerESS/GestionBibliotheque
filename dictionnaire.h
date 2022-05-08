#ifndef DICTIONNAIRE_H
#define DICTIONNAIRE_H

#include "document.h"

class Dictionnaire : public Document
{
public:
    Dictionnaire(const string &langue, int num_enregistrement, const string &titre);

    const string &getLangue() const;

    const string toString() const;

private:
    string langue;
};

#endif // DICTIONNAIRE_H
