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

void etoiles(int N)
{
    for (int i=1;i<=N;i++)
    {
        for (int j=1;j<=N-i;j++)
            printf(" ");
        for (int k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    //saisie d'un entier N
    int N = saisie() ;
    etoiles( N);


    return 0;
}
