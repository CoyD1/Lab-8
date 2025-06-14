#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>
#include "func1.h"

int main()
{
    std::string filepath = "surnames.txt";
    enrolled(filepath);
    std::string surname;
    while (true)
    {
        std::cin >> surname;
        if (surname != "end")
            unenrolled(surname);
        else
            break;
    }
    print(Mymap, duplicates);
}