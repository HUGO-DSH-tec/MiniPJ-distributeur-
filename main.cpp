#include <iostream>
#include "client.h"
#include "compte.h"
using namespace std;


int main() {
    Client client1("12345678", "Dupont", "Jean", "0606060606");
    Compte compte1(client1, 1000);  // Création d'un compte avec 1000€ de solde initial

    compte1.afficherCompte();

    compte1.deposer(500);  // Déposer 500€
    compte1.retirer(200);  // Retirer 200€
    
    return 0;
}

