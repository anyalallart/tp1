//
// Created by Administrateur on 12/09/2022.
//
#include "function.h"

void test (float a, float b, float c){
    float d = (b*b) - (4*a* c);
    double r1, r2;
    if (d < 0) {
        /*double complex r3 = (-b+ (float)sqrt(d*I))/(2*a);
        double complex r4 = (-b- (float)sqrt(d*I))/(2*a);
        printf("il existe deux racines complexes: %.2f et %.2f", r3, r4);*/
        printf("les racines ne sont pas reels");
    }
    if (d == 0) {
        float r = (-b/2*a);
        printf("il existe une racine: %f", r);
    }
    if (d > 0){
        r1 = (float)((-b+ sqrt(d))/(2*a));
        r2 = (float)(-b- sqrt(d))/(2*a);
        printf("il existe deux racine: %f et %f", r1, r2);
    }
}

char minuscule (char t){
    return tolower( (int)t);
}

int fact_for(int f){
    int fa = 1;
    for(int i = 1; i<=f; i++){
        fa *= i;
    }
    return fa;
}

int fact_while(int f){
    int fa = 1;
    int i = 1;
    while(i <= f){
        fa *= i;
        i++;
    }
    return fa;
}

int fact_rec(int f){
    if (f == 1) return 1;
    return f * fact_rec(f-1);
}

void pendu(char mot[]){
    int ok = 0;
    int nb = (int)(sizeof(mot)/sizeof(char));
    int t = 0; //lettres trouvés
    char l; //letter
    char v[nb];
    for (int i = 0; i <nb; i++){
        v[i] = '_';
    }

    while(!ok){
        printf("\nEnter a letter: ");
        scanf("%c", &l);
        for (int j = 0; j <nb; j++){
            if (l == mot[j]){
                v[j] = l;
                t++;
            }
        }
        for (int k = 0; k <nb; k++){
            printf("%c", v[k]);
        }
        if (nb == t) ok = 1;
    }
}
