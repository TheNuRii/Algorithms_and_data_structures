#include <iostream>
using namespace std;

bool bin_search(int value, int data[], int size) {
    int begin = 0;
    int end = size - 1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (data[middle] == value) {
            return true;
        }

        if (data[middle] > value)
            end = middle - 1;
        else
            begin = middle + 1;
    }
    return false;
}

int main() {
    int const N = 6;
    int tab[N];
    int value;
    for (int i = 0; i < N; ++i){
        cin >> tab[i];
    }
    cin >> value;
    cout << bin_search(value, tab, N);
    return 0;
}