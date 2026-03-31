#ifndef ASISTENT_MEDICAL_H
#define ASISTENT_MEDICAL_H

#include "Persoana.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class AsistentMedical : public Persoana {
private:
    string nrCertificare;
    string departament;
    int aniExperienta;
    vector<string> calificari;

public:
    AsistentMedical(string n, string p, string nrCert, string dept, int ani)
        : Persoana(n, p), nrCertificare(nrCert), departament(dept), aniExperienta(ani) {
        cout << "✓ Constructor AsistentMedical: " << n << " " << p << endl;
    }

    ~AsistentMedical() {
        cout << "✓ Destructor AsistentMedical: " << nume << " " << prenume << endl;
    }

    void afisareInfo() override {
        Persoana::afisareInfo();
        cout << "\n--- ASISTENT MEDICAL ---\n";
        cout << "Nr Certificare: " << nrCertificare << "\n";
        cout << "Departament: " << departament << "\n";
        cout << "Ani Experienta: " << aniExperienta << "\n";
        cout << "Calificari: ";
        for (const auto& cal : calificari) {
            cout << cal << " | ";
        }
        cout << "\n";
    }

    void adaugaCalificare(string cal) {
        calificari.push_back(cal);
        cout << "✓ Calificare adaugata: " << cal << endl;
    }

    string getNrCertificare() const { return nrCertificare; }
    string getDepartament() const { return departament; }
    int getAniExperienta() const { return aniExperienta; }

    void setDepartament(string dept) { departament = dept; }
    void setAniExperienta(int ani) { aniExperienta = ani; }
};

#endif // ASISTENT_MEDICAL_H
