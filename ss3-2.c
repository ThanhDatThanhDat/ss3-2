#include<stdio.h>

int main(){
	// khai bao bien
	float  Celsius, Fahrenheit;
	// Nhap nhiet do 
	printf("Ban hay nhap nhiet do theo Celsius : ");
	scanf("%f",&Celsius);
	// tinh toan doi tu Celsius sang Fahrenheit
	Fahrenheit = (Celsius * 9/5) + 32;
	printf("Nhiet do doi tu Celsius sang Fahrenheit la: %f", Fahrenheit);
	
	return 0;
}
