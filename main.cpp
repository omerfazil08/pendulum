#include <iostream>
#include <cmath>

using namespace std;

class Pendulum {
private:
    double length; 
    double gravity;   

public:

    Pendulum(double l, double g) : length(l), gravity(g) {}

    double calculatePeriod() {
        double PI = 3.141592;
        return 2 * PI * sqrt(length / gravity);
    }

    void displayInfo() {
        cout << "Pendulum Information:" << endl;
        cout << "Length: " << length << " meters" << endl;
        cout << "Gravity: " << gravity << " m/s²" << endl;
        cout << "Calculated Period: " << calculatePeriod() << " seconds" << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter Length: ";
    cin >> a;
    cout << "Enter Gravity: ";
    cin >> b;
    Pendulum myPendulum(a, b);

    myPendulum.displayInfo();

    return 0;
}
