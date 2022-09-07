#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
    printf("donner un nombre :");
    scanf("%i",&nb);

    char ch[5];
    // convert 123 to string [buf]
    itoa(nb, ch, 10);

    int i=0;
    while(ch[i]!='\0')
    {
        int j=i+1;
        while((ch[i]!=ch[j])&&(ch[j]!='\0'))
            j++;
        if(ch[j]!='\0')
        {
            printf("entier non distinct");
            break;
        }
        i++;
        if(ch[i]=='\0')
            printf("nombre est distinct");
    }
    return 0;
}
