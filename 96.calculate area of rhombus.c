#include <stdio.h>
#include <conio.h>
 
int main(){printf("My regeistration number is RA2211042010032 !");
    float diagonalOne, diagonalTwo, area;
    printf("Enter the length of diagonals of rhombus\n");
    scanf("%f %f", &diagonalOne, &diagonalTwo);
    /* Area of rhombus = (product of diagonals)/2 
                       = (diagonalOne X diagonalTwo)/2 */
    area = (diagonalOne * diagonalTwo)/2;
    printf("Area of rhombus : %0.4f\n", area);
     
    getch();
    return 0;
}
