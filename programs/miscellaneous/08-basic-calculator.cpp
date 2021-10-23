# include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(operation) {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}

/*
Output:
Enter operator either + or - or * or /: +
Enter two operands: 4 2
6
*/

