#include <iostream>

using namespace std;

int tuna = 20;
// functions created outside of functions can be used in every single function

int main()
{
   int tuna = 69;
   cout << ::tuna << endl;
}
 // the unary scope resolution operator takes the global variable the function
