#include <iostream>

using namespace std;

struct Pair {
    int first;
    double second;

    bool init(int f, double s) {
        if (f < 0 || s < 0.0)
            return false;
        else {
            first = f;
            second = s;

            return true;
        }
    }

    public:
        void read();
        void display();
        double cost();
};

void Pair::read() {
    int f = 0;
    double s = 0.0;

    do {
        cout << "Input first: ";
        cin >> f;
        cout << "Input second: ";
        cin >> s;
    } while (!init(f, s));
}

void Pair::display() {
    cout << "First: " << first << ". Second: " << second << ".\n";
}

double Pair::cost() {
    return first * second;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Pair obj;

    obj.read();
    obj.display();

    cout << "Cost: " << obj.cost();
}
