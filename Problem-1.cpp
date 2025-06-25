#include <iostream>
using namespace std;

class Calculator {
    double a, b;
public:
    Calculator(double x, double y) : a(x), b(y) {}

    double operate(string op) {
        if (op == "add") return a + b;
        else if (op == "subtract") return a - b;
        else if (op == "multiply") return a * b;
        else if (op == "divide") {
            if (b != 0) return a / b;
            else {
                cout << "Division by zero error\n";
                return 0;
            }
        } else {
            cout << "Invalid operation\n";
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;

    Calculator calc(a, b);
    cout << "Result: " << calc.operate(op) << endl;
    return 0;
}
