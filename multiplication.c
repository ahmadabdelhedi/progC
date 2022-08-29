#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Declaration des fonctions
void Afficher(int T[10])
{
    for (int i=0; i<10; i++)
        printf("\t%d\t", T[i]);
}

int main()
{

    int Temp[]={0,0,0,0,0,0,0,0,0,0};
    //saisie d'un entier N
    for(int i=0; i <10; i++)
    {
        for (int j =0; j<10; j++)
            Temp[j]+=j+1;
        Afficher(Temp);
        printf("\n");
    }

    return 0;
}
