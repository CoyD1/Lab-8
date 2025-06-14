#include "func2.h"
#include <vector>
#include <string>
#include <iostream>

HashTable::HashTable()
{
    table_size = 10;
    current = 0;
    elements.resize(table_size);
}
HashTable::HashTable(int size)
{
    table_size = size;
    current = 0;
    elements.resize(table_size);
}
HashTable::~HashTable()
{
    elements.clear();
    current = 0;
}
long HashTable::hash(const std::string &s)
{
    long long hash = 0;

    for (int i = 0; i < s.size(); i++)
    {
        hash = hash * 51 + s[i];
    }
    return hash;
}
void HashTable::insert(const std::string &product, int price)
{
    long index = hash(product);
    unsigned int indexInHashtable = index % elements.size();
    for (Object &object : elements[indexInHashtable])
    {
        if (object.product == product)
        {
            object.price = price;
            return;
        }
    }
    elements[indexInHashtable].push_back({product, price});
    current++;
}
int HashTable::search(const std::string &product)
{
    long index = hash(product);
    unsigned int indexInHashtable = index % elements.size();
    for (Object &object : elements[indexInHashtable])
    {
        if (object.product == product)
        {
            return object.price;
        }
    }
    return -1;
}
void HashTable::remove(const std::string &product)
{
    long index = hash(product);
    unsigned int indexInHashtable = index % elements.size();
    for (auto i = elements[indexInHashtable].begin(); i != elements[indexInHashtable].end();)
    {
        if (i->product == product)
        {
            elements[indexInHashtable].erase(i);
            current--;
        }
        else
        {
            i++;
        }
    }
}
bool HashTable::isEmpty()
{
    return current != 0 ? false : true;
}
int HashTable::size()
{
    return current;
}
void HashTable::print()
{
    for (size_t i = 0; i < elements.size(); ++i)
    {
        std::cout << "Bucket " << i << ":\n";
        for (auto &object : elements[i])
        {
            std::cout << "  " << object.product << " - " << object.price << " rub.\n";
        }
    }
}