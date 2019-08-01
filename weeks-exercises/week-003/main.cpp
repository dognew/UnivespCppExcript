#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    string name = "Douglas";
    cout << "Info var name:" << endl;
    cout << "Value: " << name << endl;
    cout << "Tipo: " << typeid(name).name() << endl;
    cout << "Size: " << name.size() << "bytes" << endl;
    return 0;
}
