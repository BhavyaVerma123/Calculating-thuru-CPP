# include <iostream>
using namespace std;
//include group
int main() {
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
//operators
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2; //basic +
            break;
// + func
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2; //basic -
            break;
// - func
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2; //basic *
            break;
// * func
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2; //basic /
            break;
// / func
        default:
            
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
//last end
