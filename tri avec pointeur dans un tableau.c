#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    int *a=malloc(sizeof(int));
    printf("donner un entier :");
    scanf("%d",a);
    printf("a=%d",*a);
    X
    int b;
    int *a;
    b=20;
    a=&b;
    b=b+5;
    *a=10;
    printf("a=%d",*a);
    */

    //Déclaration des variables
    int *t=malloc(5*sizeof(int));
    int temp,i,j;

    //remplissage tableau
    printf("remplissage tableau ");
    for(int i=0;i<5;i++)
    {
        printf("t[%d]=",i);
        scanf("%d",t+i);
    }

    //Tri
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(*(t+i)>*(t+j))
            {
                temp=*(t+i);
                *(t+i)=*(t+j);
                *(t+j)=temp;
            }

    //Affichage
    for(int i=0;i<4;i++)
    {
        printf(" %d ",*(t+i));
    }
    return 0;
}

