//
//  main.c
//  loopsExerciseOne
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float nombre = 1;
    while (nombre > 0) {
        printf("Insérez un nombre positif:\n");
        scanf("%f", &nombre);
    }
    printf("Le nombre doit être positif!\n");
    return 0;
}
