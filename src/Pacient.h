#ifndef PACIENT_H
#define PACIENT_H

#include "Persoana.h"

class Pacient : public Persoana {
private:
    std::string nrIdentificare;
    std::string diagnostic;
    std::string medic;

public:
    // Constructor
    Pacient(const std::string& nume, const std::string& prenume, const std::string& nrIdentificare, const std::string& diagnostic, const std::string& medic)
        : Persoana(nume, prenume), nrIdentificare(nrIdentificare), diagnostic(diagnostic), medic(medic) {}

    // Destructor
    ~Pacient() {}

    // Override method
    void afisareInfo() override {
        Persoana::afisareInfo();
        std::cout << "Nr Identificare: " << nrIdentificare << '\n';
        std::cout << "Diagnostic: " << diagnostic << '\n';
        std::cout << "Medic: " << medic << '\n';
    }

    // Getter methods
    std::string getNrIdentificare() const { return nrIdentificare; }
    std::string getDiagnostic() const { return diagnostic; }
    std::string getMedic() const { return medic; }

    // Setter methods
    void setNrIdentificare(const std::string& nrId) { nrIdentificare = nrId; }
    void setDiagnostic(const std::string& diag) { diagnostic = diag; }
    void setMedic(const std::string& med) { medic = med; }
};

#endif // PACIENT_H
