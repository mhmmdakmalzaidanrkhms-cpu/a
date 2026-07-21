#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x ;
    srand(time(0));
    //
    cout << "PERULANGAN DO WHILE" << endl;
    x = 1 + rand() % 10;
    do {
        cout << "TI,: Bilangan Acak = " << x << endl;
        x = rand() % 10;
    } while (x <= 5);
