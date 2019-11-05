#include <stdio.h>
#include <math.h>

int main(){
    int i;
    int diceroll_a,diceroll_b,diceroll_c,diceroll_d;

    for(i=0;i<1;i++){
        diceroll_a=(rand()%6)+1;
        printf("%d\n",diceroll_a);
    }
    for(i=0;i<1;i++){
        diceroll_b=(rand()%6)+1;
        printf("%d\n",diceroll_b);
    }
    for(i=0;i<1;i++) {
        diceroll_c = (rand() % 6) + 1;
        printf("%d\n", diceroll_c);
    }
    int sum;
    sum = diceroll_a+diceroll_b+diceroll_c;
    char guess;
    printf("guess the next number (h/l/s)\n");
    scanf("%c",&guess);

    for(i=0;i<1;i++) {
        diceroll_d = (rand() % 6) + 1;
        printf("%d\n", diceroll_d);
    }

    if((diceroll_d>diceroll_c)&&(guess=='h')||(diceroll_d<diceroll_c)&&(guess=='l')||(diceroll_d==diceroll_c)&&(guess=='s')){
    printf("Great job, Solid performance...you have a good guessing sense\n");
    }
    else
        printf("Use your brain you...dumb ass!!!\n");

}







