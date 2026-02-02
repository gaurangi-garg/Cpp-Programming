// perimeter of rectangle
# include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float length,breadth,perimeter;
    cout << "Enter the length of rectangle: " << endl;
    cin >> length;
    cout << "Enter the breadth of rectangle: " << endl;
    cin >> breadth;
    perimeter=2*(length+breadth);
    cout << "Perimeter of rectangle is " << fixed << setprecision(2) << perimeter << " units";
    return 0;
}
