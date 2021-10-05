#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include <regex>
#include <Windows.h>

using namespace std;

string end_cin = "";
int max_number = 6;
int minimum_number = 1;

int every_die_ever(string x) {
    cout << "rolling D" << x << "\nthe result is : ";
    int x_2 = 0;
    stringstream sstream;
    sstream << x;
    sstream >> x_2;
    cout << rand() % (x_2 + 1 - 1) + 1;
    cout << "\n";
    return 0;

}

int main()
{
    string do_again = "";
    srand((((((((((((static_cast<unsigned int>(time(0)))*7)/20)+2732)%4)+37)+(static_cast<unsigned int>(time(0)))*9)-74)*2)/13)+13)+(static_cast<unsigned int>(time(0))));
    do
    {
        cout << "how many sides should the die have\n";
        string die = "";
        cin >> die;
        every_die_ever(die);
        Sleep(1000);
    } while (true);
    //rand() % (max_number + 1 - minimum_number) + minimum_number;
    //do {
    //    cout << rand() % (max_number + 1 - minimum_number) + minimum_number << "\n";
    //    cin >> end_cin;
    //} while (end_cin == "y");
    return 0;
}