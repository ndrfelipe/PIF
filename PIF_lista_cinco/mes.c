#include <stdio.h>

typedef enum{January=1, February, March, April, May, June, July, August, September, October, November, December}Months;

int main(){
    Months input_mes;
    scanf("%d", &input_mes);

    switch(input_mes){
        case January:
            printf("January\n");
            break;
        case February:
            printf("February\n");
            break;
        case March:
            printf("March\n");
            break;
        case April:
            printf("April\n");
            break;
        case May:
            printf("May\n");
            break;
        case June:
            printf("June\n");
            break;
        case July:
            printf("July\n");
            break;
        case August:
            printf("August\n");
            break;
        case September:
            printf("September\n");
            break;
        case October:
            printf("October\n");
            break;
        case November:
            printf("November\n");
            break;
        case December:
            printf("December\n");
            break;
        default:
            break;
    }

    return 0;
}