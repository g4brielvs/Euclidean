//
//  main.c
//  Euclidean
//
//  Created by Gabriel Vicente on 6/10/15.
//  Copyright (c) 2015 Gabriel Vicente. All rights reserved.
//

#include <stdio.h>
 
int gcd(int a, int b);
 
int main(void)
{
    int a, b;
     
    scanf("%d %d", &a, &b);
     
    printf("The iterative GDC is %d\n", iterative_gcd(a, b));
    printf("The recursive GCD is %d\n", recursive_gcd(a, b));
 
    return 0;
}
 
 // Iterative version:
 int iterative_gcd(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Recursive version:
int recursive_gcd(int a, int b) {
    if (b == 0)
        return a;
     
    return gcd(b, a % b);
}