#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *ch=malloc(10*sizeof(char));
    printf("donner la chaine de ch:\n");
    scanf("%s",ch);
    int nb,i;
    char ca;
    ca='o';
    for(i=0;i<strlen(ch);i++)
        if(*(ch+i)==ca)
            nb++;
        printf("le nombre d'occurance est :%d",nb);

    return 0;
}
