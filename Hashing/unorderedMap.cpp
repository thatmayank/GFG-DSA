#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m.insert({"courses", 15});

    if (m.find("ide") != m.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    for (auto it = m.begin(); it != m.end(); it++)
        cout << (it->first) << " " << (it->second) << endl;

    if (m.count("ide") > 0)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    cout << m.size() << endl;
    m.erase("ide");

    return 0;
}
