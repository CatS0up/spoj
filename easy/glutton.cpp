#include <iostream>

using namespace std;

const unsigned int SECONDS_IN_DAY = 86400;

int main()
{
    unsigned int gluttons, boxCapacity, cases;

    cin >> cases;

    for (unsigned short i = 0; i < cases; ++i) {
        unsigned int time, rest = 0, sum = 0;

        cin >> gluttons >> boxCapacity;

        for (unsigned short i = 0; i < gluttons; ++i) {
            cin >> time;

            sum += (SECONDS_IN_DAY / time);
        }

        if (sum % boxCapacity > 0) {
             cout << (sum / boxCapacity) + 1 << '\n';
        } else {
            cout << sum / boxCapacity << '\n';
        }
    }

    return 0;
}