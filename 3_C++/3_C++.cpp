#include <iostream>
#include <vector>
#include <map> // <-- rendezetebben tárolja az adatokat mint a dict. c#-ban
#include <unordered_map> // <-- dict. c#-ból

using namespace std;
int main()
{
    cout << "Hello World!\n";

    vector<int> lista1;     // []
    vector<int> lista2(5);  // [0 0 0 0 0]
    vector<int> lista3(3, 2);  // [2 2 2]
    vector<int> lista4{ 1,2,3 };  // [1 2 3]

    cout << "méret: " << lista1.size() << endl;
    lista1.push_back(10);

    for (int& elem : lista4) // rfor + TAB
    {
        cout << elem << endl;
    }

    string szoveg = "Lorem ipsum dolor sit amet";

    map<char, int> dict;
    for (char& c : szoveg)
    {
        if (dict.find(c) == dict.end())
            szoveg[c] = 1;
        else
            szoveg[c]++;
    }

    for (auto& par : dict)
        cout << par.first << " : " << par.second << endl;

    map<char, int> dict2;
    for (char& c : szoveg)
        dict[2]++;

    for (auto& par : dict2)
        cout << par.first << " : " << par.second << endl;
}