#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> my_vector = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    it = my_vector.begin();
    while (it != my_vector.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
    return 0;
}

