#include <iostream>
#include <string>
using namespace std;

class Compte {
private:
    static int compteur;  // Pour générer un numéro de compte unique
    int numeroCompte;
    double solde;
    Client proprietaire;  // Chaque compte est associé à un client

public:
    // Constructeur
    Compte(Client c, double soldeInitial)
        : proprietaire(c), solde(soldeInitial) {
        numeroCompte = ++compteur;  // Numéro de compte unique
    }

    // Accesseurs
    int getNumeroCompte() const { return numeroCompte; }
    double getSolde() const { return solde; }

    // Méthodes pour les opérations bancaires
    void deposer(double montant) {
        solde += montant;
        cout << "Dépôt de " << montant << " effectué. Nouveau solde: " << solde << "\n";
    }

    void retirer(double montant) {
        if (montant <= solde) {
            solde -= montant;
            cout << "Retrait de " << montant << " effectué. Nouveau solde: " << solde << "\n";
        } 
        else
        {
            cout << "Solde insuffisant!" << "\n";
        }
    }

    // Afficher les informations du compte
    void afficherCompte() const {
        cout << "Numéro de compte: " << numeroCompte << "\nSolde: " << solde << "\n";
        proprietaire.afficherInfos();
    }
};

// Initialisation du compteur de comptes
int Compte::compteur = 0;