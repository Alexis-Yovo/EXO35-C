# Données à utiliser

```c
// Données à utiliser
typedef struct {
    char sNom[30];
    int iAnnee_naissance;
    char sTelephone[20];
} personne;
// et 
typedef struct item {
    personne entree;
    struct item * suivant;
} cellule;
