//
//  main.c
//  04 실습4
//
//  Created by 이예림 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int year;
    
    printf("input the year : ");
    scanf("%i", &year);
    
    printf("is the year %i the leap year? : %i\n", year, (year%4==0)&&(year%100!=0)||(year%400==0));
        
    return 0;
}
