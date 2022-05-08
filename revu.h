#ifndef REVU_H
#define REVU_H

#include "document.h"

class Revu : public Document
{
public:
    Revu(int mois, int annee, int num_enregistrement, const string &titre);

    int getMois() const;
    int getAnnee() const;

    const string toString() const;

private:
    int mois;
    int annee;
};

#endif // REVU_H
