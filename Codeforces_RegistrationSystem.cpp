#include <bits/stdc++.h>

using namespace std;

const int SIZE = 10000;

class HashTable
{
private:
    static const int MAXSIZE = 10000;
    list<pair<string, long long>> table[MAXSIZE];

public:
    unsigned long long hashFunction(string key);
    unsigned long long getTablesize(unsigned long long hashIndex, string name);
    void insertItem(string name);
    void printTable();
};

unsigned long long HashTable::hashFunction(string key)
{
    unsigned long long rslt{};
    for (unsigned long long i = 0; i < key.length(); i++)
    {
        rslt += key[i];
    }

    return rslt % SIZE;
}

void HashTable::insertItem(string name)
{
    unsigned long long hashValue = hashFunction(name);
    auto &cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++)
    {
        if (bItr->first == name)
        {
            keyExists = true;
            long long posi = bItr->second;
            posi++;
            bItr->second = posi;
            cout << name << posi << endl;
            break;
        }
    }

    if (!keyExists)
    {
        cout << "OK\n";
        cell.emplace_back(name, 0);
    }
    return;
}

int main()
{
    HashTable HT;

    unsigned long long n;
    cin >> n;

    while (n--)
    {
        string name;
        cin >> name;

        HT.insertItem(name);
    }

    return 0;
}
