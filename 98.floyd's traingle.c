#include<stdio.h>
#include<conio.h>
int main() {printf("My regeistration number is RA2211042010032 !");
    int i, j, rows, counter;
    printf("Enter the number of rows of Floyd's triangle\n");
    scanf("%d", &rows);
    for (counter = 1, i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%3d", counter++);
        }
        printf("\n");
    }
    getch();
    return 0;
}
