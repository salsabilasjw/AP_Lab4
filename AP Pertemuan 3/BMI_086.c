#include <stdio.h>
#include <stdlib.h>

int main () {
    system ("cls") ;
    float bmi, berat, tinggi ;

    printf ("masukkan berat badan (kg): ") ;
    scanf ("%f", &berat) ;
    printf ("masukkan tinggi badan (meter): ") ;
    scanf ("%f", &tinggi) ;

    bmi = berat / (tinggi * tinggi) ;
    printf ("nilai bmi: %.2f\n" ,bmi) ;

    if (bmi < 18.5) {
        printf ("berat badan kurang\n") ;
    } else if (bmi < 25) {
        printf ("berat badan normal\n") ;
    } else if (bmi < 30) {
        printf ("berat badan berlebih\n") ;
    } else {
        printf ("obesitas") ;
    }
    
    return 0 ;
}