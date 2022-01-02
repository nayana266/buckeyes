#include <iostream>

using namespace std;

int main()
{
    int donut[5];
    int *bp0 = &nayana[0];
    int *bp1 = &nayana[1];
    int *bp2 = &nayana[2];
    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bp0 += 2;
    cout << "bp0 is now at " << bp0 << endl;
}

