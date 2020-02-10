//
//
//  Lab6
//
//  Created by Nortus on 12/15/19.
//  Copyright © 2019 Nortus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i,j,h,w,T,k,temp;

    printf("Enter height of matrix: ");
    scanf("%i",&h);
    printf("Enter widht of matrix: ");
    scanf("%i",&w);
    int matrix[h][w];

    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf("%i",&temp);
            matrix[i][j] = temp;
        }
    }

    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }

   for (i = 2;i <= w-1;i+=2){

       T = matrix[0][i];
       j = 0;

       while(matrix[0][j] < T){
           j = j + 2;
       }

       for(k = i-2; k >= j; k-=2){
            matrix[0][k+2] = matrix[0][k];
       }

       matrix[0][j] = T;

    }

    printf("\n");

    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
