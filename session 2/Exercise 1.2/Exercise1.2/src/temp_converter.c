#include "temp_converter.h"

// Function to convert Celsius to Fahrenheit
float temp_converter_toFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
float temp_converter_toKelvin(float celsius)
{
    return celsius + 273.15;
}

const char *temp_converter_determineStateOfWater(float celsius)
{
    if (celsius < 0)
    {
        return "Solid";
    }
    else if (celsius >= 0 && celsius < 100)
    {
        return "Liquid";
    }
    else
    {
        return "Gas";
    }
}

// Function to convert Fahrenheit to Celsius
float temp_converter_toCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function to state of water
const char *temp_converter_determineStateOfWaterFahrenheit(float fahrenheit)
{
    float celsius = temp_converter_toCelsius(fahrenheit);
    return temp_converter_determineStateOfWater(celsius);
}
