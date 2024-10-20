# include <iostream>
using namespace std;
int main ()
{
    cout << "Enter the Radius Value  " << endl;
    int r;
    cin >> r;
    const int pi= 22/7;

    int A;
    A = pi*r*r;

    cout << "Area of the Circle =  "<< A;
    cout << endl;

    return 0;
}
