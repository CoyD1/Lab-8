#ifndef TASK2_H
#define TASK2_H
#include <vector>
#include <string>

struct Object
{
    std::string product;
    int price;
};

class HashTable
{
private:
    int table_size;
    std::vector<std::vector<Object>> elements;
    int current;

public:
    HashTable();
    HashTable(int size);
    ~HashTable();

    long hash(const std::string &s);
    void insert(const std::string &product, int price);
    int search(const std::string &product);
    void remove(const std::string &product);
    bool isEmpty();
    int size();
    void print();
};

#endif
