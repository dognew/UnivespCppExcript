#include <iostream>

using namespace std;

int main()
{
    bool login = 1;
    char nome[10] = "Douglas"; // vector size 10 bytes
    int age = 39;
    float timeLoad = 1.26; // seconds
    double timeLoadPrecision = 1.264844578957432; // seconds
    char s = 's'; // size: 1 byte

    if(login){
        cout << "Login efetuado: " << nome << endl;
        cout << "Tempo de espera: " << timeLoad << s << endl;
    }

    return 0;
}
