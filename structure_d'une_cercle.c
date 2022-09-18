#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;

};
struct cercle
{
    struct point centre;
    float r;
};

struct point saisiepoint()
{
    struct point res;
    printf("donner x:");
    scanf("%d",&res.x);
    printf("donner y:");
    scanf("%d",&res.y);
    return res;
}
struct cercle saisie()
{
    struct cercle res;
    res.centre=saisiepoint();
    printf("donner r:");
    scanf("%f",&res.r);
    return res;
}

void deplacer(int a,int b,struct point P)
{
    P.x=P.x+a;
    P.y=P.y+b;
}
void afficherpoint(struct point P)
{
    printf("point:(%d,%d)",P.x,P.y);
}
float surface(struct cercle c)
{
    return 3,14*c.r*c.r;
}
float perimetre(struct cercle c)
{
    return 2*3,14*c.r;
}
void afficher(struct cercle c)
{
    afficherpoint(c.centre);
    printf("r=%f",c.r);
    printf("perimetre=%f",perimetre(c));
    printf("surface=%f",surface(c));
}
void main()
{
    struct cercle cer;
    cer=saisie();
    afficher(cer);
    printf("apres deplacement:");
    deplacer(2,3,cer.centre);
    afficher(cer);
    return 0;
}
