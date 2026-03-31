#include <iostream>
#include <string>

class Person {
public:
    virtual void afisareInfo() {
        std::cout << "Info about person" << std::endl;
    }
};

class Pacient : public Person {
private:
    std::string diagnostic;
    std::string medic;

public:
    // Constructor
    Pacient(const std::string& diagnostic, const std::string& medic) : diagnostic(diagnostic), medic(medic) {}

    // Destructor
    ~Pacient() {}

    // Override afisareInfo method
    void afisareInfo() override {
        Person::afisareInfo();
        std::cout << "Diagnostic: " << diagnostic << ", Medic: " << medic << std::endl;
    }

    // Setter for diagnostic
    void setDiagnostic(const std::string& newDiagnostic) {
        diagnostic = newDiagnostic;
    }

    // Getter for diagnostic
    std::string getDiagnostic() const {
        return diagnostic;
    }

    // Setter for medic
    void setMedic(const std::string& newMedic) {
        medic = newMedic;
    }

    // Getter for medic
    std::string getMedic() const {
        return medic;
    }
};

