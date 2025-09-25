//
//  main.c
//  04 실습2
//
//  Created by 이예림 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x;
    
    printf("input the second : ");
    scanf("%i", &x);
    
    printf("the time is %i : %i\n", x/60, x%60);
        
    return 0;
}
