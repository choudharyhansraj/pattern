// hElo CrZZy cODer    welcome to my code.      
#include<stdio.h>
#include<time.h>

void printHeart(int length, int breadth) {
    int i, j, n = length / 2;
    for (i = n; i <= length; i += 2) {
        for (j = 1; j < length - i; j += 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= length - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = length; i >= 1; i--) {
        for (j = i; j < length; j++)
            printf(" ");
        for (j = 1; j <= (i * 2) - 1; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
	int i = 0, p;
	
    int length, breadth;
    
    printf("Enter the length of th1e heart: ");
    scanf("%d", &length);
    
    printf("Enter the breadth of the heart: ");
    scanf("%d", &breadth);
    
    printf("Enter after how much time the heart will be blink: ");
    scanf("%d", &p);
    
    printf("\n");
    
    while(i<11){
    printHeart(length, breadth);
    
    i++;
    sleep(p);
    printf("\033[2J\033[H");
    sleep(1);
	}
    return 0;
}

