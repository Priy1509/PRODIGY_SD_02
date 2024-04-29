#include <stdio.h>
#include<string.h>
float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9/5) + 32;
}

float celsius_to_kelvin(float celsius) 
{
    return celsius + 273.15;
}

float fahrenheit_to_celsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5/9;
}

float fahrenheit_to_kelvin(float fahrenheit) 
{
    return (fahrenheit + 459.67) * 5/9;
}

float kelvin_to_celsius(float kelvin) 
{
    return kelvin - 273.15;
}

float kelvin_to_fahrenheit(float kelvin)
{
    return kelvin * 9/5 - 459.67;
}
int main()
{
float temperature;
char unit[20];
printf("Temperature Conversion Program\n");
printf("Enter the temperature value: ");
scanf("%f", &temperature);
printf("Enter the original unit of measurement (celsius, fahrenheit, kelvin): ");
scanf("%s",unit);
if (strcmp(unit, "celsius") == 0)
    {
        float fahrenheit = celsius_to_fahrenheit(temperature);
        float kelvin = celsius_to_kelvin(temperature);
        printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit and %.2f Kelvin.\n", temperature, fahrenheit, kelvin);
    }
    else if (strcmp(unit, "fahrenheit") == 0)
    {
        float celsius = fahrenheit_to_celsius(temperature);
        float kelvin = fahrenheit_to_kelvin(temperature);
        printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius and %.2f Kelvin.\n", temperature, celsius, kelvin);
    }
    else if (strcmp(unit, "kelvin") == 0)
    {
        float celsius = kelvin_to_celsius(temperature);
        float fahrenheit = kelvin_to_fahrenheit(temperature);
        printf("%.2f Kelvin is equal to %.2f degrees Celsius and %.2f degrees Fahrenheit.\n", temperature, celsius, fahrenheit);
    }
    else
    {
        printf("Invalid unit . Please enter correct unit\n");
    }
return 0;
}
