//
//  main.c
//  loopsExerciseFive
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int n
    ,i = 2
    ,s = 0;
    
    //Ask for positive integer
    printf("Insérez un nombre entier positif:\n");
    scanf("%i", &n);
    
    //Compute the sum of all even integers from 2 to twice the aforespecified integer
    while (i <= n*2) {
        s += i;
        i += 2;
    }
    
    //Print the result
    printf("Le résultat est de %i\n", s);
    return 0;
}
