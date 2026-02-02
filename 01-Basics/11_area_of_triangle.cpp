// area of triangle
# include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float base,height,area;
    cout << "Enter the base of triangle: " << endl;
    cin >> base;
    cout << "Enter the height of triangle: " << endl;
    cin >> height;
    area=0.5*base*height;
    cout << "Area of triangle is " << fixed << setprecision(2) << area << " square units";
    return 0;
}
