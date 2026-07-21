#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;

    srand(time(0));

    cout << "PERULANGAN WHILE" << endl;
    x =1 +  rand() % 10;
