#include <iostream>
#include <string>

class Persoana {
private:
    std::string nume;
    int varsta;

public:
    // Constructor
    Persoana(std::string nume, int varsta) : nume(nume), varsta(varsta) {}

    // Destructor
    ~Persoana() {}

    // Metoda de afisare
    void afisareInfo() const {
        std::cout << "Nume: " << nume << ", Varsta: " << varsta << std::endl;
    }

    // Getters
    std::string getNume() const { return nume; }
    int getVarsta() const { return varsta; }
};