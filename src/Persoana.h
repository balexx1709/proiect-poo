#pragma once

#include <string>

class Persoana {
protected:
    std::string nume;
    std::string prenume;
    int varsta;
    std::string cnp;

public:
    Persoana(const std::string& nume, const std::string& prenume, int varsta, const std::string& cnp)
        : nume(nume), prenume(prenume), varsta(varsta), cnp(cnp) {}

    virtual ~Persoana() {}

    virtual void afisareInfo() const = 0;

    std::string getNume() const { return nume; }
    std::string getPrenume() const { return prenume; }
    int getVarsta() const { return varsta; }
    std::string getCNP() const { return cnp; }
};