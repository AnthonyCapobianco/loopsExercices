//
//  main.c
//  loopsExerciseEleven
//
//  Created by Anthony Capobianco on 24/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int n=0
        ,a
        ,i=0;
    //while the number is greater or equal to 0 do
    do{
        printf("Veuillez insérer un nombre entier positif ou nul:\n");
        scanf("%i", &a );
        //if the number is equal to or greater than 0 than set n as n+a else n
        a>=0?n+=a:n;
        a>=0?i++:i;
    }while (a >= 0);
    //print the sum of all the integers that have been entered prior to a negative number discarding the latter
    printf("La somme des nombres entiers positif est de: %i\n", n);
    printf("La moyenne des nombres entiers positif est de: %d\n", n/i);
    
    return 0;
}
