#include <bits/stdc++.h>
#include "IntArray.h"
#include "IntArrayRC.h"

using namespace std;


void test_IntArray() {
    IntArray a1;
    for (auto i: a1) cout << i << ' ';
    cout << "\n";

    int b2[] = {1, 2, 3};
    IntArray a2(b2, 2);
    for (auto i: a2) cout << i << ' ';
    cout << "\n";

    IntArray a3(a2);
    for (auto i: a3) cout << i << ' ';
    cout << "\n";

    IntArray a4(5, 3);
    for (auto i: a4) cout << i << ' ';
    cout << "\n________________________________________\n";


    int b1[] = {1, 3, 5, -200, 800};
    IntArray c1(b1, 5);
    cout << a1.size() << " -> ";
    a1 = c1;
    cout << a1.size() << "\n";

    cout << a1.max() << " -> ";
    a1[4] = 1;
    cout << a1.max() << "\n";

    cout << a1.min() << " -> ";
    a1[3] = 500;
    cout << a1.min() << "\n";

    for (auto i: a1) cout << i << ' ';
    a1.sort();
    cout << "-> ";
    for (auto i: a1) cout << i << ' ';
    cout << "\n";

    int ind_min = a1.find(a1.min());
    cout << ind_min << " -> " << a1[ind_min] << "\n";

    if (a1 == a2) {
        cout << "similar" << "\n";
    }
    if (a1 != a2) {
        cout << "different" << "\n";
    }
}


void test_IntArrayRC() {
    IntArrayRC a1;
    for (auto i: a1) cout << i << ' ';
    cout << "\n";

    int b2[] = {1, 2, 3};
    IntArrayRC a2(b2, 2);
    for (auto i: a2) cout << i << ' ';
    cout << "\n";

    IntArray a_norm(b2, 2);
    IntArrayRC a3(a_norm);
    for (auto i: a3) cout << i << ' ';
    cout << "\n";

    IntArrayRC a4(5, 3);
    for (auto i: a4) cout << i << ' ';
    cout << "\n________________________________________\n";


    int b1[] = {1, 3, 5, -200, 800};
    IntArrayRC c1(b1, 5);
    cout << a1.size() << " -> ";
    a1 = c1;
    cout << a1.size() << "\n";

    cout << a1.max() << " -> ";
    a1[4] = 1;
    cout << a1.max() << "\n";

    cout << a1.min() << " -> ";
    a1[3] = 500;
    cout << a1.min() << "\n";

    for (auto i: a1) cout << i << ' ';
    a1.sort();
    cout << "-> ";
    for (auto i: a1) cout << i << ' ';
    cout << "\n";

    int ind_min = a1.find(a1.min());
    cout << ind_min << " -> " << a1[ind_min] << "\n";

    if (a1 == a2) {
        cout << "similar" << "\n";
    }
    if (a1 != a2) {
        cout << "different" << "\n";
    }

    cout << "\n___________test out of range__________\n\n";

    cout << a1[-1] << '\n';
    cout << a1[0] << '\n';
    cout << a1[a1.size() + 1] << '\n';
}


void swap(int i, int j, IntArray &a) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


int main() {
    cout << "\n~~~~~~~~~~~~~~~~~~~~IntArray~~~~~~~~~~~~~~~~~~~~~~\n";
    test_IntArray();


    cout << "\n\n\n~~~~~~~~~~~~~~~~~~~~test swap~~~~~~~~~~~~~~~~~~~~~~\n";
    int a[] = {1, 5, 2, -100};
    int b[] = {5, 4, 3, 2, 1};

    IntArray a1(a, 4);
    IntArrayRC b1(b, 5);
    IntArrayRC b2(b, 3);

    for(auto item: a1) cout << item << ' ';
    swap(0, 1, a1);
    cout << "-> ";
    for(auto item: a1) cout << item << ' ';

    cout <<'\n';
    for(auto item: b1) cout << item << ' ';
    swap(0, 1, b1);
    cout << "-> ";
    for(auto item: b1) cout << item << ' ';


    cout << "\n\n\n~~~~~~~~~~~~~~~~~~~~IntArrayRC~~~~~~~~~~~~~~~~~~~~~~\n";
    test_IntArrayRC();
}
