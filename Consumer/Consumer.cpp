// Consumer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

__declspec(dllimport) float pow(float a);

int main()
{
    std::cout << pow(5.0f);
}
