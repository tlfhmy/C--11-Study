#include <initializer_list>
#include <iostream>

using namespace std;

void displaylist(std::initializer_list<int> vals){
    for (auto it = vals.begin(); it != vals.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    displaylist({1,2,4,5,6,2,7,8,9,10});
    return 0;
}