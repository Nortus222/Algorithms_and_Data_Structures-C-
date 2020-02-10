//
//  main.c
//  ASD
//
//  Created by Nortus on 10/19/19.
//  Copyright © 2019 Nortus. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {

    int n,i,k,a,j,s;
    float x,b;

    printf("Enter n: ");
    scanf("%i",&n);
    printf("Enter X number: ");
    scanf("%f",&x);

    float X[n];
    for(i = 0;i<n;i++){
        X[i]=0;
       }
    b=1;
    s=x;
    for(i = 0;i<n;i++){
        for(k=0;k<=i;k++){
            a = 2*k+1;
            for(j=1;j<=a;j++){
                if(j>=2){
                    s *= s;
                }
                b *= j;
            }
            if (k % 2 == 0){

                X[i] += s/b;
                printf("%f\n", X[i]);
                printf("%d\n", s);


            }else{
                X[i] += -s/b;
                printf("%f\n", X[i]);
                printf("%d\n", s);

            }
            s = x;
            b = 1;
        }

    }

    printf("________\n");

    for(i = 0;i<n;i++){
        printf("%f\n", X[i]);
    }


    return 0;
}
