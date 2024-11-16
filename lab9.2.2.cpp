#include <iostream>
using namespace std;

#define ADD(x, y) (x + y)
#define SUBTRACT(x, y) (x - y)
#define MULTIPLY(x, y) (x * y)
#define DIVIDE(x, y) (x / y)

int main() {
    double num1, num2;
    char operation;

    // Запитуємо у користувача числа та операцію
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть операцію (+, -, *, /): ";
    cin >> operation;
    cout << "Введіть друге число: ";
    cin >> num2;

    double result;

    // Виконання обраної операції
    if (operation == '+') {
        result = ADD(num1, num2);
    } else if (operation == '-') {
        result = SUBTRACT(num1, num2);
    } else if (operation == '*') {
        result = MULTIPLY(num1, num2);
    } else if (operation == '/') {
        result = DIVIDE(num1, num2);
    } else {
        cout << "Невірна операція!" << endl;
        return 1;
    }

    // Виведення результату
    cout << "Результат: " << result << endl;

    return 0;
}
