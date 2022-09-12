/*Premier programme en C*/

#include "function.c"

int main(){
    printf("Hello World\n");
    test(4,5,1);
    printf("\n%c", minuscule('C'));
    printf("\n%d", fact_for(4));
    printf("\n%d", fact_while(4));
    printf("\n%d",fact_rec(4));
    pendu("hello");
    return EXIT_SUCCESS;
}
