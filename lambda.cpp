#include <iostream>
#include <initializer_list>
using namespace std;

int main()
{
    []() {
        cout << "Hello Lambda!" << endl;
    }();

    auto sum = [](const initializer_list<int> &vals) -> int {
        int su{0};
        for (const auto &i : vals)
        {
            su += i;
        }
        return su;
 
    };

    cout << sum({1,2,3,4,5,6,7,8,9,10}) << endl;

    return 0;
}