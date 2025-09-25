//
//  main.c
//  04 실습6
//
//  Created by 이예림 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int second;
    int minute;
    int time;
    
    printf("input the second : ");
    scanf("%i", &second);
    
    time = second / 3600;
    minute = (second % 3600)/60;
    
    
    printf("The time for %i second is %i : %i : %i \n", second,time, minute, (second%3600)%60);
        
    return 0;
}
