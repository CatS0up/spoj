#include <iostream>

using namespace std;

int factorial (unsigned int number) {
    if (number == 0) {
        return 1;
    }
    else if (number < 3) {
        return number;
    }

    return number * factorial(number - 1);
}

int main()
{
    unsigned int number, cases;

    cin >> cases;

    for (unsigned short i = 0; i < cases; ++i) {
        cin >> number;

        if (number > 9) {
            cout << 0 << ' ' << 0 << '\n';
        } else {
            unsigned int frac = factorial(number);

            cout << (frac % 100) / 10 << ' ' << frac % 10 << '\n';
        }
    }

    return 0;
}