//
//  main.c
//  04 실습5
//
//  Created by 이예림 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned int x;
    int b;
    
    printf("input a number : ");
    scanf("%ui", &x);
    
    for(b=0; x!=0; x>>=1)
    {
        if(x&1)//x와 숫자1이 bit연산을 함, x의 2진수 끝자리가 1이다.
        {
            b++;
        }
    }
    
    printf("The result is : %i\n", b);
        
    return 0;
}
