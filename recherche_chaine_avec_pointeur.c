#include <stdio.h>
#include <stdlib.h>

int main()
{

        int i,j;
        char *ch=malloc(100*sizeof(char));
        printf("donner la chaine ch :\n");
        scanf("%s",ch);

        char *ch1=malloc(10*sizeof(char));
        printf("donner la chaine ch1:\n");
        scanf("%s",ch1);
          i=0;
         while(i<=strlen(ch)-strlen(ch1))
         {
              j=0;
             while((j<strlen(ch1))&&(*(ch+i+j)==*(ch1+j)))
                j++;

             if(j==strlen(ch1))
             {
                printf("%s existe dans %s",ch1,ch);
                break;
             }

           i++;

         }
         if(i>strlen(ch)-strlen(ch1))
            printf("%s n'existe pas dans %s",ch1,ch);
    return 0;
}
