
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
// 3. Function to determine the body condition status
string getStatus(float bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    }
    else if (bmi < 25) {
        return "Normal Weight";
    }
    else if (bmi < 30) {
        return "Overweight";
    }
    else {
        return "Obese";
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
