// Programare class implementation

#include <iostream>

class Programare {
public:
    Programare() {
        std::cout << "Programare created" << std::endl;
    }

    void start() {
        std::cout << "Programare started" << std::endl;
    }
};

int main() {
    Programare p;
    p.start();
    return 0;
}