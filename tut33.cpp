#include <iostream>

using namespace std;

int main()
{
    int donuts[9];

    cout << "Element - Value" << endl;

    for(int x = 0; x<=8; x++){
        donuts[x] = 99;

        cout << x << "--------" << donuts[x] << endl;
    }
}
