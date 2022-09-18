#include <stdio.h>
#include <stdlib.h>

struct vecteur
{
    float x;
    float y;
};
struct vecteur add(struct vecteur v,struct vecteur u)
{
    struct vecteur res;
    res.x=u.x+v.x;
    res.y=u.y+v.y;
    return res;
};
struct vecteur saisie()
{
    struct vecteur res;
    printf("donner x:");
    scanf("%f",&res.x);
    printf("donner y:");
    scanf("%f",&res.y);
    return res;
};
void afficher(struct vecteur v)
{
    printf("vecteur=%fi+%fj",v.x,v.y);
}

void main()
{
    struct vecteur e1,e2,e3;
    e1=saisie();
    e2=saisie();
    e3=add(e1,e2);
    afficher(e3);



    return 0;
}
