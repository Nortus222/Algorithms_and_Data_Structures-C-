//
//  main.c
//  Lab2(1)
//
//  Created by Nortus on 10/20/19.
//  Copyright © 2019 Nortus. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {

      double sum = 0;
      double mult = 1;
      int i,j;
      int n = 0;
      int oper = 0;
      double tmp = 1;

      printf("Enter n : \n");
      scanf("%i",&n);

      for (i = 1; i<=n; i++){
          for (j = 1; j <=i; j++ ){

              mult *= j + cos(j);
              oper += 3;
          }

          tmp *= 4;

          sum += (tmp-i)/mult;

          mult = 1;

          oper += 4;
      }

      printf("S = %.7f\nOperations - %i\n",sum,oper);

    return 0;
}
