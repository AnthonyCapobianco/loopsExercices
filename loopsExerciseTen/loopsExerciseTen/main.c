//
//  main.c
//  loopsExerciseTen
//
//  Created by Anthony Capobianco on 24/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    
    //programme qui lit un entier positif n et en calcule sa factorielle.
    //program which read a number and computes it's factorial
    int n
        ,i;
    long int nFactorial = 0;
    
    //ask for that integer
    printf("Veuillez entrer un nombre entier:\n");
    scanf("%i",&n);
    nFactorial = i = n;
    //compute factorial
    while (i >= 2){
        nFactorial *= i;
        i--;
    }
    //print the result
    printf("La factorielle de %i est: %li\n",n, nFactorial);
    return 0;
}
