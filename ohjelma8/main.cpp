#include <iostream>

using namespace std;

int main()
{
    int i=10;
    int *p=&i;
    char merkit[]="aku ankka";
    char *cp;

    cp=merkit;
    cout << *p << " " << p << endl;
    cout << *cp << endl;
    cp++;
    cout << *cp << endl;
    cp=merkit;

    for (int i=0;i<10;i++,cp++)
    {
        cout << *cp;

    }
    return 0;
}
