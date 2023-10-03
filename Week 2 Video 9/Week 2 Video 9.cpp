#include <iostream>

using namespace std;

int main()
{
    //Prompt user for temperature in degrees fahrenheit
    cout << "What is the temperature outside in degrees fahrenheit? ";

    //Get temperature in fahrneheit
    float fahrenheit;
    cin >> fahrenheit;

    //Convert temperature from fahrenheit to celsius and display result
    float celsius;
    celsius = (fahrenheit - 32) * (5.0f / 9.0f);
    cout << "It is " << celsius << " degrees celsius outside." << endl;
}