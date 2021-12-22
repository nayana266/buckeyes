#include <iostream>
#include <string>

using namespace std;

class NayanasClass{
public:
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
    NayanasClass bo;
    bo.setName("Nayana Nona");
    cout << bo.getName();
    return 0;
}
