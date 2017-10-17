//
//  main.c
//  loopsExerciseThree
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float nombre;
    printf("Insérez un nombre:\n");
    scanf("%f", &nombre);
    for (int i = 1; i < 11; i++) {
        printf("%.2f x %i = %.2f\n", nombre, i, nombre*i );
    }
    return 0;
}
