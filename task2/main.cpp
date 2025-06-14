#include <iostream>
#include "func2.h"

int main()
{
    std::cout << "Creating default table with 10 buckets: " << std::endl;
    HashTable defaulttable;
    defaulttable.print();
    std::cout << "Table size: " << defaulttable.size() << std::endl;

    std::cout << "Creating table with size 4 and filling it with items: " << std::endl;
    HashTable table(4);
    std::cout << "Checking if table is empty: ";
    std::cout << "Table size: " << table.size() << std::endl;
    if (table.isEmpty())
        std::cout << "Table is empty" << std::endl;

    table.insert("Chair", 700);
    table.insert("Jacket", 10000);
    table.insert("Mashrooms", 100000);

    std::cout << "Filling table with items: " << std::endl;
    table.print();
    std::cout << "Checking if table is empty: ";
    std::cout << "Table size: " << table.size() << std::endl;
    if (!table.isEmpty())
        std::cout << "Table is not empty" << std::endl;

    std::cout << "Trying to find Apple in table and print their price, then try to find gjs: " << std::endl;
    std::cout << table.search("Chair") << std::endl
              << table.search("gjs") << std::endl;

    std::cout << "Removing Mushrooms from table: " << std::endl;
    table.remove("Mushrooms");
    std::cout << std::endl;
    table.print();

    return 0;
}