#include <iostream>
using namespace std;

int main() {
    int mattoncini, mattoncininecessari, altezza;

    altezza = 0;
    cout << "Quanti sono i mattoncini?" << endl;
    cin >> mattoncini;
    while (mattoncini >= mattoncininecessari + (altezza + 1)) {
        altezza = altezza + 1;
        mattoncininecessari = mattoncininecessari + altezza;
    }
    cout << "L'altezza della piramide è di " << altezza << " piani " << endl;
    return 0;
}