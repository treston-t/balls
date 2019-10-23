/* Lab2 - Quadratic Formula Treston Tendilla 10/23/19 */

#include <iostream>
#include <cmath>                            //Allows compiler to use square root
#include <iomanip>
#include <fstream>

using namespace std;

double a,b,c;
void title();
double getABC();
double calculateRoots();
void loop();

ofstream out ("Lab2Output.txt");

int main() {
    title();
    getABC();
    calculateRoots();
    loop(); }

void title() {                                                              //Displays text in command window
    cout << setw(28) << "The Quadratic Formula" << "\n";
    cout << setw(19) << "by" << "\n";
    cout << setw(26) << "Treston Tendilla" << "\n\n";
    cout << setw(26) << "ax^2 + bx + c = 0" << "\n\n";

    out << setw(28) << "The Quadratic Formula" << "\n";
    out << setw(19) << "by" << "\n";
    out << setw(26) << "Treston Tendilla" << "\n\n";
    out << setw(26) << "ax^2 + bx + c = 0" << "\n\n"; }

double getABC() {                                                           //Allows user input in command window
    cout << showpoint << fixed << setprecision(4);
    cout << setw(34) << "Enter coefficients a, b, and c: " << "\n\n";
    cout << setw(16) << "a = "; cin >> a;
    cout << setw(16) << "b = "; cin >> b;
    cout << setw(16) << "c = "; cin >> c;
    cout << "\n";
    out << showpoint << fixed << setprecision(4);
    out << setw(34) << "Enter coefficients a, b, and c: " << "\n\n";
    out << setw(16) << "a = "; out << setw(8) << a << "\n";
    out << setw(16) << "b = "; out << setw(8) << b << "\n";
    out << setw(16) << "c = "; out << setw(8) << c << "\n\n"; }

double calculateRoots() {
    cout << showpoint << scientific;
    out << showpoint << scientific;

    double numerator1, numerator2, denom;
    double disc, root1, root2, realPart, imagPart;                          //Roots

    disc = (b * b - 4 * a * c);
    denom = (2 * a);

    if(disc >= 0) {
        numerator1 = (-b + sqrt(disc) );
        numerator2 = (-b - sqrt(disc) );

        root1 = (numerator1 / denom);
        root2 = (numerator2 / denom);

        cout << setw(12) << "Real" << setw(14) << root1 << "\n";
        cout << setw(14) << "Roots:" << setw(12) << root2;
        out << setw(12) << "Real" << setw(14) << root1 << "\n";
        out << setw(14) << "Roots:" << setw(12) << root2;

    } else if(disc < 0) {
        disc = disc * -1;
        realPart =(-b / denom);

        imagPart = (sqrt(disc) / denom);
        imagPart = abs(imagPart);
        cout << setw(8) << "Complex" << setw(14) << realPart << " + " << imagPart << " i" << "\n";
        cout << setw(8) << "Roots:" << setw (14) << realPart << " - " << imagPart << " i";
        out << setw(8) << "Complex" << setw(14) << realPart << " + " << imagPart << " i" << "\n";
        out << setw(8) << "Roots:" << setw(14) << realPart << " - " << imagPart << " i"; } }

    void loop () {
        for (int line =0; line <=9; line++) {
            cout << "\n";
            out << "\n";}

        }
