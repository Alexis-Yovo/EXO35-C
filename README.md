// Données à utiliser
typedef struct {
    char sNom[30];
    int iAnnee_naissance;
    char sTelephone[20];
} personne;

typedef struct item {
    personne entree;
    struct item * suivant;
} cellule;
