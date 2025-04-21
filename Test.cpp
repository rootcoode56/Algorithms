#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; // Number of elements in the vector
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        v.push_back(element); // Input the elements of the vector
    }

    int pos; // Position to erase (1-based index)
    cin >> pos;

    // Erase the element at the specified position (convert 1-based index to 0-based)
    v.erase(v.begin() + (pos - 1));

    int start, end; // Start and end of the range to erase (1-based index)
    cin >> start >> end;

    // Erase the range of elements (convert 1-based index to 0-based)
    v.erase(v.begin() + (start - 1), v.begin() + (end - 1));

    // Output the size of the vector
    cout << v.size() << endl;

    // Output the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
