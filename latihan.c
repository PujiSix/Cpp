#include "stdio.h"
#include "ctype.h"
int main(){
    char unit;
    double temprature;
    printf("\nPilih unit (C) atau (F): ");scanf("%c",&unit);
    unit = toupper(unit);
    if(unit=='C'){
        printf("\nMasukkan temperatur dalam Celcius: ");scanf("%lf",&temprature);
        temprature=(temprature*9/5)+32;
        printf("\nTemperatur dalam Fahrenheit: %.1lf",temprature);
    }else if(unit=='F'){
        printf("\nMasukkan temperatur dalam Fahrenheit: ");scanf("%lf",&temprature);
        temprature=(temprature-32)*5/9;
        printf("\nTemperatur dalam Celcius: %.1lf",temprature);
    }else{
        printf("\nUnit yang anda masukkan salah!");}

    return 0;
}