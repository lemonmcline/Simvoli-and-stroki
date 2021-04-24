#include <iostream>
#include <string>

using namespace std;

int main()
{
    char z[10]= "zxczxc";
    cout << z << " ";

    string x1 = "Morrowind";
    cout << x1 << " ";

    string x2 = "HW!";
    cout << x2 << " ";

    string x3 = "Skyrim";
    cout << x3[4] << " ";
    cout << x3 + " " + x1 << " ";

    cout << strlen(z) << " ";   
    cout << x1.length() << " ";

    string x4;
    cin >> x4 ;
    cout << x4 << " ";

    cout << " ";
    string x5;
    cin >> x5;
    cout << x5 << " ";
}
