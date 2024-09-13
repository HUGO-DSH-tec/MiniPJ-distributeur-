#include <iostream>
#include <string>

using namespace std;

class Client {
private:
    string CIN;
    string nom;
    string prenom;
    string telephone;

public:
    // Constructeur
    Client(string cin, string n, string p, string tel)
        : CIN(cin), nom(n), prenom(p), telephone(tel) {}

    // Accesseurs
    string getCIN() const { return CIN; }
    string getNom() const { return nom; }
    string getPrenom() const { return prenom; }
    string getTelephone() const { return telephone; }

    // Afficher les informations du client
    void afficherInfos() const {
        cout << "CIN: " << CIN << "\nNom: " << nom << "\nPrenom: " << prenom 
                  << "\nTelephone: " << telephone << "\n";
    }
};