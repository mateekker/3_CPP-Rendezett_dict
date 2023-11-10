#include <iostream>
#include <vector>
#include <map> // <-- rendezetebben tárolja az adatokat mint a dict. c#-ban
#include <unordered_map> // <-- dict. c#-ból
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    cout << "Hello World!\n";

    vector<int> lista1;     // []
    vector<int> lista2(5);  // [0 0 0 0 0]
    vector<int> lista3(3, 2);  // [2 2 2]
    vector<int> lista4{ 1,2,3 };  // [1 2 3]

    cout << "Méret: " << lista1.size() << endl;
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

    // Halmazok

    cout << "Hashset: \n";

    set<int> hash;
    hash.insert(5);
    hash.insert(5);
    hash.insert(5);
    hash.insert(7);

    for (const int& elem : hash)
        cout << elem << endl;

    hash.erase(5);

    for (const int& elem : hash)
        cout << elem << endl;

    // Stack
    
    cout << "Stack: \n";

    stack<int> st;
    st.push(5);
    st.push(10);
    cout << st.top() << endl; // <-- C# peek
    st.pop(); // <-- C# -al ellentétben ez void
    cout << st.empty() << endl;

    // Queue

    cout << "Queue: \n";

    queue<int> qu;
    qu.push(5); // C# Enqueue
    qu.push(10);
    cout << qu.front() << endl;
    qu.pop(); // C# Dequeue
    cout << qu.front() << endl;

    cout << "Prioirty queue: \n";

    priority_queue<int> pqu; // Elsõbbségi queue
    pqu.push(5);
    pqu.push(1);
    pqu.push(8);
    pqu.push(10);
    pqu.push(3);
    pqu.push(9);
    pqu.push(7);

    cout << pqu.top() << endl;
    pqu.pop();
}