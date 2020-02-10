//
//  main.c
//  Lab5
//
//  Created by Nortus on 12/2/19.
//  Copyright © 2019 Nortus. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {

    int j,i,w,h,left,right,mid,temp,v;
    bool flag = false;
    printf("Enter height of matrix: ");
    scanf("%i",&h);
    printf("Enter widht of matrix: ");
    scanf("%i",&w);
    printf("Enter value to find: ");
    scanf("%i", &v);
    int matrix[h][w];
    printf("Enter matrix elements\n");

    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf("%i",&temp);
            matrix[i][j] = temp;
        }
    }
    printf("\n");
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<h;i++){
        left = 0;
        right = w-1;

        flag = false;
        while(left <= right){
            mid = (left + right)/2;
            printf("central element [%i][%i]\n",i,mid);
            if(matrix[i][mid] == v){
                printf("The element %i is in position [%i][%i]\n", v, i, mid);
                flag = true;
                break;
            }else{
                if(v > matrix[i][mid]){
                    right = mid - 1;
                }else{
                    if(v < matrix[i][mid]){
                        left = mid + 1;
                    }
                }
            }
        }

        if(flag == false){
            printf("There is no element %i in the row %i\n", v, i+1);
        }
    }
    return 0;
}
