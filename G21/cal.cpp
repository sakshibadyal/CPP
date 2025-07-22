#include <iostream>
#include <cmath>
using namespace std;
// calculator using function
int calc(int n, int m, char op) {
    if (op == '+') return n + m;
    else if (op == '-') return n - m;
    else if (op == '*') return n * m;
    else if (op == '/') {
        if (m != 0)
            return n / m;
        else {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    } 
    else {
        cout << "INVALID OPERATOR" << endl;
        return 0;
    }
}
// Fahrenheit to Celsius
float f_TO_c(float f) {
    return (f - 32) * (5.0 / 9.0);
}
// Celsius to Fahrenheit
float c_TO_f(float c) {
    return (c * 9.0 / 5.0) + 32;
}
// INR to USD 
float inr_to_usd(float inr) {
    return inr / 85.0;
}
// USD to INR 
float usd_to_inr(float usd) {
    return usd * 85.0;
}
// Area of circle
float circle_area(float r) {
    return 3.14 * r * r;
}
// Area of rectangle
float rect_area(float l, float b) {
    return l * b;
}
// Area of triangle
float triangle_area(float base, float h) {
    return 0.5 * base * h;
}
// Volume of cylinder
float cylinder_volume(float r, float h) {
    return 3.14 * r * r * h;
}
// Volume of sphere
float sphere_volume(float r) {
    return (4.0 / 3.0) * 3.14 * r * r * r;
}
// Square root of a number
float square_root(float c) {
    return sqrt(c);
}
// Power of number
int power(int a, int z) {
    return pow(a, z);
}
int main() {
    int n, m, a, z;
    char op;
    float c, f, rupee, dollar, r, l, b, base, h;
    cin >> n >> m >> op >> f >> c >> dollar >> rupee >> r >> l >> b >> base >> h >> a >> z;
    cout << "Calc result: " << calc(n, m, op) << endl;
    cout << "F to C: " << f_TO_c(f) << endl;
    cout << "C to F: " << c_TO_f(c) << endl;
    cout << "INR to USD: " << inr_to_usd(rupee) << endl;
    cout << "USD to INR: " << usd_to_inr(dollar) << endl;
    cout << "Circle area: " << circle_area(r) << endl;
    cout << "Rectangle area: " << rect_area(l, b) << endl;
    cout << "Triangle area: " << triangle_area(base, h) << endl;
    cout << "Cylinder volume: " << cylinder_volume(r, h) << endl;
    cout << "Sphere volume: " << sphere_volume(r) << endl;
    cout << "Square root: " << square_root(c) << endl;
    cout << "Power: " << power(a, z) << endl;
}