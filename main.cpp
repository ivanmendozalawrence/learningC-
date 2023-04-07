#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    //--------------------------------------------------------------------------------------------------
    // Print Statement for C++
    // std:;endl is essentially makes the print statement a println statement in java
    std::cout << "Hello, World!" << std::endl;
    //simple input
    //int value;
    //cout << "please enter a value"<<endl;
    //cin >> value;
    //cout << "Your input is " << value <<endl;
    //Variable Decleration
    int a = 1;
    int b = 2;
    int c = a;
    const double pi = 3.14;
    //--------------------------------------------------------------------------------------------------
    /** increment operators **/
    //For Postfix
    //let say x = 5 and y = x++ the output should be x = 6, y = 5.
    int x = 5;
    int y = x++;
    //for prefix
    //let say f = 5 and g = ++f the output should be f = 6, g= 6.
    int f = 5;
    int g = ++f;
    //Note is done like this the result of the following characters would reduce based on the value
    //Variable you want to add
    cout <<"x is equals to" + x << endl << "y is equals to"+y <<endl;
    //the proper way to do is to
    cout <<"x is equals to " << x << endl <<"y is equals to "<< y;
    //--------------------------------------------------------------------------------------------------
    /**For Loops**/
    //if the condition is impossible to meet the code is unreachable
    for (int i = 0; i<1 ; ++i) {
        std:: cout <<"\n"<<a++<<"\n--new line--";
    }
    //Proper infinite for loop
       /* for (; true; ) {
            cout << a++ << endl;
        }
       */

    /**Random Number**/
    srand(time(0));
    int numbers = rand();

    cout <<endl<< numbers <<endl;

    //Dice Roller
    int minValue = 1;
    int maxValue = 6;
    int diceRolls = rand()% (maxValue-minValue+1)+minValue;
    int diceRolls2 = rand()% (maxValue-minValue+1)+minValue;
    cout << diceRolls <<','<<diceRolls2;
    return 0;
}



  