//
//  main.c
//  loopsExerciseTwo
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float nombre = 0;
    while (nombre >= 0) {
        printf("Insérez un nombre positif:\n");
        scanf("%f", &nombre);
        //si le nombre est positif afficher son double sinon afficher message d'érreur
        nombre>=0?
            printf("Le double du nombre %.2f est %.2f\n", nombre, 2*nombre):
            printf("Le nombre doit être positif\n");
    }
    return 0;
}
