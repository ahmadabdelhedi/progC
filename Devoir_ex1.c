#include <stdio.h>
#include <stdlib.h>

int saisie()
{
    int res;
    do
    {
        printf("Donner un entier de 4 chiffres : ");
        scanf("%d",&res);
    }while((res>10000)||(res<999));
    return res;
}
int reverse(int n)
{
    int U,D,C,M;
    U=n%10;
    D=(n%100)/10;
    C=(n%1000)/100;
    M=n/1000;
    return U*1000+D*100+C*10+M;

}
void croissant(int n)
{
   int u,d,c,m;
    u=n%10;
    d=(n%100)/10;
    c=(n%1000)/100;
    m=n/1000;
    if((u<d)&&(d<c)&&(c<m))
        printf("les chiffre de n suivent un ordre croissant");
    else
        printf("les chiffre de n ne sont pas dans l'ordre croissant");
}







int main()
{
    int X=saisie() ;
    int XREVERSE=reverse(X);
    printf("l'inverse de %d est %d \n",X,XREVERSE);
    int somme=X+XREVERSE;
    printf("le somme de %d est :\n",somme);
    croissant(X);




    return 0;
}
