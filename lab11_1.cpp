#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int i = rand() % 9;
    cout << "Press Enter 3 times to reveal your future." << endl;
    for (int g = 0; g < 3; g++)
    {
        cin.get();
    }
    cout << "You will get " << grade[i] << " in this 261102.";
}