// Medic.cpp

#include <iostream>

class Medic {
public:
    void heal() {
        std::cout << "Healing..." << std::endl;
    }
};

int main() {
    Medic medic;
    medic.heal();
    return 0;
}