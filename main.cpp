#include <bits/stdc++.h>
#include "IntArray.h"

using namespace std;


int main() {
    IntArray a1;
    for(auto i: a1) cout << i << ' ';
    cout << "\n";

    int b2[] = {1, 2, 3};
    IntArray a2(b2, 2);
    for(auto i: a2) cout << i << ' ';
    cout << "\n";

    IntArray a3(a2);
    for(auto i: a3) cout << i << ' ';
    cout << "\n";

    IntArray a4(5, 3);
    for(auto i: a4) cout << i << ' ';
    cout << "\n________________________________________\n";


    int b1[] = {1, 3, 5, -200, 800};
    IntArray c1 (b1, 5);
    cout << a1.size() << " -> ";
    a1 = c1;
    cout << a1.size() << "\n";

    cout << a1.max() << " -> ";;
    a1[4] = 1;
    cout << a1.max() << "\n";

    cout << a1.min() << " -> ";
    a1[3] = 500;
    cout << a1.min() << "\n";

    for(auto i: a1) cout << i << ' ';
    a1.sort();
    cout << "-> ";
    for(auto i: a1) cout << i << ' ';
    cout << "\n";

    int ind_min = a1.find(a1.min());
    cout << ind_min << " -> " << a1[ind_min] << "\n";

    if(a1 == a2) {
        cout << "similar" << "\n";
    }
    if (a1 != a2) {
        cout << "different" << "\n";
    }
    return 0;
}
