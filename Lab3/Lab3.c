//
//  main.c
//  Lab3
//
//  Created by Nortus on 11/3/19.
//  Copyright © 2019 Nortus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {

    float a = 0;
    float b = 0;
    int n = 0;
    float min = 0;

    srand(time(NULL));
    printf("Enter n : ");
    scanf("%i",&n);

    float y[n];
    float z[n];

    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);

    printf("\nY[] = ");
    for (int i = 0;i<n;i++){
        y[i] = ((float)rand() / (float)(RAND_MAX))*35;
        printf("%.3f ",y[i]);
    }

    printf("\nZ[] = ");
    for (int i = 0; i<n; i++){
        if (y[i] < 33 & y[i] > 11){
            z[i] = y[i] - 10*a;
            printf("%.3f ",z[i]);
        }else{
            z[i]=y[i]+5*b;
            printf("%.3f ",z[i]);
        }
    }

    min = 50;
    for (int i =0 ;i<n;i++){
        if(i%2==0){
            z[i]*=a;
        }else{
            z[i]*=-a;
        }
        if(z[i]<min){
            min=z[i];

        }
    }

    printf("\nR = %.3f\n",min);

    return 0;
}
