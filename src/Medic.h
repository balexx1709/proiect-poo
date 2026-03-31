#ifndef MEDIC_H\n#define MEDIC_H\n\n#include "Persoana.h"

class Medic : public Persoana {
public:
    Medic(); // Constructor
    ~Medic(); // Destructor
    void performCheckUp();
};

#endif // MEDIC_H