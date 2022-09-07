#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char *ch=malloc(10*sizeof(char));
    printf("donner la chaine de ch:\n");
    scanf("%s",ch);

    char *mirroir=malloc(strlen(ch)*sizeof(char));

    for ( i=0;i<strlen(ch);i++)
        *(mirroir+i)=*(ch+strlen(ch)-1-i);

    *(mirroir+i)='\0';

    printf("mirroir est:%s",mirroir);


    return 0;
}

