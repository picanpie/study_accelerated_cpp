//
// Created by kysgood on 18/02/23.
//
#include <iostream>
#include <string>

//#define CH1
//#define CH2 0
using std::cin; using std::endl;
using std::cout; using std::string;

int main() {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

#ifdef CH1
    /* Adding empty spaces */
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    const std::string first(second.size(), '*');

    std::cout << std::endl;
    std::cout << first <<std::endl;
    std::cout << second << std::endl;
    std::cout << "* " <<greeting<<" *"<<std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
#endif

#ifdef CH2
    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << endl;

    for (int r = 0 ; r != rows; ++r) {
        string::size_type c = 0;

        while(c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        cout<<endl;
    }
#endif


    return 0;


}