// Lab 1 Assignment February 08 2024


#include <iostream>
using namespace std;

int main()
{

    //Variable String

    string nameMe;
    string food;

    nameMe = "Junior!!";
    food = "KoreanBBQ!!";
    //My name and favorite food

    cout << "Hi my name is, " << nameMe << endl;
    cout << "My all time favorite food is, " << food << endl;
   
    //Variables for credits

    double credits_per,
        credits_all = 18,
        credits_1 = 4;

    // Variable Calculation

    credits_per = credits_1 / credits_all * 100;

    // Shows Percentage

    cout << "Percentage of courses completed is % " << credits_per << endl;
    return 0;

}