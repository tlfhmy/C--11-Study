#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

int main()
{
    for (auto i : {1, 2, 3, 4, 5, 6, 7, 8, 9, 0})
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec{2, 3, 5, 7, 11, 13, 17};

    for (auto &i : vec)
    {
        i *= 2;
    }

    for (const auto &i:vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
