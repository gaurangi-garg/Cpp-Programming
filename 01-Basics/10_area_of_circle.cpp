// area of circle
# include <iostream>
# include <numbers>
using namespace std;
int main(){
    double radius,area;
    double pi = numbers::pi;
    cout << "Enter the radius of circle: " << endl;
    cin >> radius;
    area=pi*radius*radius;
    cout << "Area of circle is " << area << " square units";
    return 0;
}
