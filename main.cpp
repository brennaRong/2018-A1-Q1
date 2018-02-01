#include <iostream>

// Calculate tuition fees
// 2 overloaded functions : calcFees
// Repeating modules are a different fee
// #1. Ask if the student is repeating modules
// #2. if yes > ask for number of modules repeating
// #3. calcFees (Version 1) - accept number of modules for the first time and the fees for those modules as parameters
// #4. calcFees (Version 2) - accept number of modules for the first time and their fees, and repeated modules and their fees
int calcFees(int numFirstModules, int feeFirstModules);

int calcFees(int numFirstModules, int feeFirstModules, int repeatModules, int feeRepeatModules);


using namespace std;

int main()
{
    char answer;
    int numFirstModules, repeatModules;
    int feeFirstModules = 100, feeRepeatModules = 150;

    cout << "Are you repeating any modules? Y/N" << endl;
    cin >> answer;
    if((answer == 'Y') || (answer == 'y'))
    {
        cout << "Please enter the number of modules being repeated: " << endl;
        cin >> repeatModules;
        cout << "Please enter the number of first time modules: " << endl;
        cin >> numFirstModules;
        calcFees(numFirstModules, feeFirstModules, repeatModules, feeRepeatModules);
    }


    return 0;
}

int calcFees(int numFirstModulesP, int feeFirstModulesP)
{
    return numFirstModulesP * feeFirstModulesP;
}

int calcFees(int numFirstModulesP, int feeFirstModulesP, int repeatModulesP, int feeRepeatModulesP)
{
    return (numFirstModulesP * feeFirstModulesP) + (repeatModulesP * feeRepeatModulesP);
}
