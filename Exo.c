#include <stdio.h>
#include <string.h>

// Définitions des structures
typedef struct item {
    char sNom[30];
    int iAnnee_naissance;
    struct item *suivant;
} item;

typedef struct personne {
    char sNom[30];
    int iAnnee_naissance;
    char sTelephone[20];
} personne;

// Fonction pour saisir les informations d'une personne
int saisir(personne *individu) {
    if (individu == NULL) {
        printf("L'adresse de la personne est NULL.\n");
        return 0;
    }

    printf("Saisir le nom : ");
    scanf("%s", individu->sNom);

    // Vérification du symbole spécial (#)
    if (individu->sNom[0] == '#') {
        return 0;
    }

    printf("Saisir l'année de naissance : ");
    scanf("%d", &individu->iAnnee_naissance);

    printf("Saisir le téléphone : ");
    scanf("%s", individu->sTelephone);

    return 1;
}

// Fonction pour afficher les informations d'une personne
void afficher_personne(const personne *individu) {
    if (individu == NULL) {
        printf("Aucune personne à afficher.\n");
        return;
    }

    printf("Nom : %s\n", individu->sNom);
    printf("Année de naissance : %d\n", individu->iAnnee_naissance);
    printf("Téléphone : %s\n", individu->sTelephone);
}

int main() {
    personne individu;

    // Saisie des informations
    if (saisir(&individu) == 0) {
        printf("Saisie interrompue.\n");
        return 0;
    }

    // Affichage des informations saisies
    afficher_personne(&individu);

    return 0;
}
