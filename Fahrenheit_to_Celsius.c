#include<stdio.h>
int main(){

    //coversion of fahrenheit to celsius
    float fahrenheit, celsius;

    printf("Enter temperature in Farenheit: ");     //asks user to enter the degree in Farenheit
    scanf("%f", &fahrenheit);                       //stores the user-entered value

    celsius = (fahrenheit - 32) * 5 / 9;                                                        //conversion of fareheit to celsius
    printf("%.2f degree Fahrenheit is equal to %.2f degree Celsius.", fahrenheit, celsius);     //prints the temperature in celsius

    return 0;
}
