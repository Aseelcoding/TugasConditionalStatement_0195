
#include <iostream>
using namespace std;
void inputData(float& weight, float& height) {
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (meter): ";
    cin >> height;
}
// 2 Function to calculate BMI
float calculateBMI(float weight, float height)
{
    float Result= weight / (height * height);
    return Result;
}


int main()
{
    std::cout << "Hello World!\n";
}
