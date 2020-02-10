//
//  main.c
//  Lab2(2)
//
//  Created by Nortus on 10/20/19.
//  Copyright © 2019 Nortus. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {

    double sum = 0;
    double mult = 1;
    int i = 0;
    int n = 0;
    int oper = 0;
    double tmp = 1;

    printf("Enter n : \n");
    scanf("%i",&n);

    for(i = 1;i <= n; i++){
        tmp *= 4;
        mult *= i+cos(i);

        sum += (tmp-i)/mult;

        oper += 7;
    }

    printf("S = %.7f\nOperations - %i\n",sum,oper);

    return 0;
}
