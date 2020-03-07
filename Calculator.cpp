========================================================================================================================================
 //This is a program for Calculator
========================================================================================================================================
# include <iostream>
using namespace std;

int main()
{
    char operator_type;
    float operand_1, operand_2;

    cout << "Enter Operator of type + or - or * or /: ";
    cin >> operator_type;

    cout << "Enter the two operands on which you want to perform the operation: ";
    cin >> operand_1 >> operand_2;

    switch(operator_type)
    {
        case '+':
            cout << operand_1+operand_2;
            break;

        case '-':
            cout << operand_1-operand_2;
            break;

        case '*':
            cout << operand_1*operand_2;
            break;

        case '/':
            cout << operand_1/operand_2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
