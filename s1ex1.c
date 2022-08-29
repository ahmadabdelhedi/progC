#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Declaration des fonctions

//fonction saisie
int saisie()
{
    int res=0;
    do
    {
        printf("Donner un entier positif : ");
        scanf("%d",&res);
    }while(res<=0); //Continuer tant que le nombre saisi est negatif
    return res;
}

//fonction est_heureux
bool est_heureux(int n)
{
    int S=n;
    do
    {
        //Besoin d'une variable temporaire pour les divisions par 10
        int temp =S ;
        //réinitialisation de la somme à 0 pour calculer la nouvelle valeur
        S=0;
        //calcul de la nouvelle somme
        do
        {
            //calculer le chiffre des unités
            int u = temp %10 ;
            //mettre à jour la somme
            S += u*u;
            //mettre à jour la valeur de temp
            // à la recherche du nouveau chiffre des unités
            temp = temp / 10 ;
        }while(temp!=0);
    }while(S/10!=0); //Condition d'arrêt : un seul chiffre
    //Retour du résultat
    if (S==1)
        return true;
    else
        return false;

}

//Définition liste_heureux
void liste_heureux()
{
    printf("les nombres heureux entre 1 et 100 sont : ");
    for(int i=0;i<=100;i++)
    {
        if(est_heureux(i))
        printf(" %d ", i);
    }
 }


int main()
{
    //saisie d'un entier N
    int N = saisie() ;

    //Test si N est heureux
    if(est_heureux(N))
        printf(" %d est heureux ", N);
    else
        printf(" %d n'est pas heureux ", N);

    //Afficher la liste des nombres heureux entre 1 et 100
    liste_heureux();

    return 0;
}
