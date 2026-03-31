#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Factura {
private:
    string nrFactura;
    string pacient;
    string dataFacturii;
    double sumaConsultatie;
    double sumaMedicamente;
    double sumaInternatare;
    double sumaTotal;
    string statusPlata;

public:
    Factura(string nrFact, string pac, string dataFact, double consulta, double medic, double intern)
        : nrFactura(nrFact), pacient(pac), dataFacturii(dataFact), 
          sumaConsultatie(consulta), sumaMedicamente(medic), sumaInternatare(intern), 
          statusPlata("neplatita") {
        sumaTotal = sumaConsultatie + sumaMedicamente + sumaInternatare;
        cout << "✓ Constructor Factura: " << nrFact << endl;
    }

    ~Factura() {
        cout << "✓ Destructor Factura: " << nrFactura << endl;
    }

    void afisareInfo() const {
        cout << "--- INFORMATII FACTURA ---\n";
        cout << "Nr Factura: " << nrFactura << "\n";
        cout << "Pacient: " << pacient << "\n";
        cout << "Data Facturii: " << dataFacturii << "\n";
        cout << fixed << setprecision(2);
        cout << "Suma Consultatie: " << sumaConsultatie << " RON\n";
        cout << "Suma Medicamente: " << sumaMedicamente << " RON\n";
        cout << "Suma Internatare: " << sumaInternatare << " RON\n";
        cout << "TOTAL: " << sumaTotal << " RON\n";
        cout << "Status Plata: " << statusPlata << "\n";
    }

    string getNrFactura() const { return nrFactura; }
    string getPacient() const { return pacient; }
    double getSumaTotal() const { return sumaTotal; }
    string getStatusPlata() const { return statusPlata; }

    void setStatusPlata(string status) { statusPlata = status; }

    double calculeazaTotal() const { return sumaTotal; }
};

#endif // FACTURA_H
