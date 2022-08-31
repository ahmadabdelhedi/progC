#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    printf("donner une chaine :");
    scanf("%s",ch);
    int l=0;
    while(ch[l]!='\0')
        l++;
    printf("la longeur de la chaine est: %d \n",l);
    int i=0;
    while((ch[i]==ch[l-1-i])&&(i<l/2))
    {
     i++;
    }

    if(i==l/2)
        printf("le mot est palandrome");
    else
        printf("le mot n'est pas palandrome");


    return 0;
}