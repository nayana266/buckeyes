#include <iostream>
#include <string>

using namespace std;

class NayanasClass{
public:
    NayanasClass(string z){
    setName(z);
    }
    void setName(string x){
    name = x;
    }
string getName(){
return name;
}
private:
    string name;
};

int main()
{
    NayanasClass bo("Lucky Nayana");
    cout << bo.getName();

    return 0;
}
