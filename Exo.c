#include <stdio.h>
#include <string.h> // Pour utiliser strcmp()

// Définition du type personne
typedef struct {
    char sNom[30];
    int iAnnee_naissance;
    char sTelephone[20];
} personne;

// Fonction pour vérifier si deux personnes sont identiques
int est_identique(personne individu1, personne individu2) {
    // Comparer les trois champs : sNom, iAnnee_naissance, sTelephone
    if (strcmp(individu1.sNom, individu2.sNom) != 0) {
        return 0; // Les noms sont différents
    }
    if (individu1.iAnnee_naissance != individu2.iAnnee_naissance) {
        return 0; // Les années de naissance sont différentes
    }
    if (strcmp(individu1.sTelephone, individu2.sTelephone) != 0) {
        return 0; // Les numéros de téléphone sont différents
    }
    
    // Si tous les champs sont égaux, les deux personnes sont identiques
    return 1;
}

// Fonction principale pour tester la fonction
int main() {
    personne p1 = {"John Doe", 1990, "1234567890"};
    personne p2 = {"John Doe", 1990, "1234567890"};
    personne p3 = {"Jane Smith", 1985, "0987654321"};

    printf("Comparaison p1 et p2: %d\n", est_identique(p1, p2)); // Devrait afficher 1
    printf("Comparaison p1 et p3: %d\n", est_identique(p1, p3)); // Devrait afficher 0

    return 0;
}
