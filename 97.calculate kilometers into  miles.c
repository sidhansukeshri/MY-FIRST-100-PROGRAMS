#include<stdio.h>
#include<conio.h>
int main() {
    float MILEKM = 1.6093, FEETMETER = 3.2808;
    float km, meter = 0, feet, mile = 0;
    int m;
    printf("Enter the distance in kilometer\n");
    scanf("%f", &km);
 
    mile = km/MILEKM;
    printf("%.2fKm is equal to %.2f Mile OR \n", km, mile);
    mile = 0;
 if (km >= MILEKM) {
        while (1) {
            mile++;
            km = km - MILEKM;
            if (km < MILEKM)
                break;
        }
         
    }
    meter = km * 1000;
    m = (int)meter;
    meter -= m;
    feet = meter * FEETMETER;
    printf("%.2f miles, %d meter and %.2f feet\n",
        mile, m, feet);
    getch();
    return 0;
}
