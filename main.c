//
//  main.c
//  04 실습2
//
//  Created by 이예림 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a, b;
    
    printf("input two integers : ");
    scanf("%i %i", &a, &b);
    
    printf("+ result is %i\n", a + b);
    printf("- result is %i\n", a - b);
    printf("* result is %i\n", a * b);
    printf("/ result is %i\n", a / b);
    printf("%% result is %i\n", a % b);
    
    return 0;
}
