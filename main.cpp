#include <iostream>
using namespace std;

int main()
{
    int people, days;

    cout << "Enter number of people: ";
    cin >> people;

    cout << "Enter number of days: ";
    cin >> days;

    if (people <= 0 || days <= 0)
    {
        cout << "Invalid input";
        return 0;
    }

    double water = people * days * 2.0;

    cout << "Water needed: " << water << " liters";

    return 0;
}
