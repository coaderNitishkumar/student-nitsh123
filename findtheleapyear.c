#include<stdio.h>
int main () {
    int year;
    printf("enter the year :");
    scanf("%d" ,&year);
    if (year %400==0) {
        printf("year is leap year :");

    }
    if(year%100==0) {
        printf("year is not leao year" );
    }
    if(year %4==0) {
        printf("year is leap year :"); 
    }
    else {
        printf("year is not leap lear" );
    }
    return 0;
}