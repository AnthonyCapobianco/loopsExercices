//
//  main.c
//  loopsExerciseNine
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    float n
    ,i = 1
    ,s = 0;
    
    //Ask for positive integer
    printf("Insérez un nombre entier positif:\n");
    scanf("%f", &n);
    
    //Compute the sum of the inverse of 2 to the power of all integers from 1 to the aforespecified integer
    while (i <= pow(2,n)) {
        s += 1/pow(2,i);
        i +=2;
    }
    
    //Print the result
    printf("Le résultat est de %f\n", s);
    return 0;
}
