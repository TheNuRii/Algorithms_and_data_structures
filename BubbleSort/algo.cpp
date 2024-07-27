#include "iostream"
using namespace std;

void swap_(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void bubble_sort(int tab[],int const N){
    for (int i = 0; i < N; ++i){
        for (int j  = 0; j < N - 1 - i; ++j){
            if (tab[j] > tab[j + 1])
                swap_(tab[j], tab[j + 1]);
        }

    }
}

int main(){
    const int N = 6;
    int tab[N] = {6, 5, 4, 3, 2, 1};

    bubble_sort(tab, N);

    for (int i = 0; i < N; ++i)
        cout << tab[i] << ' ';
}