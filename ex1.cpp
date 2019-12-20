#include <iostream>
#include <algorithm>
#include <vector>

bool myfunction (int i,int j) { return (i<j); }
int *alocaVector(int &size) {
    std::cin >> size;

    int *Array = new int[size];

    for (int i = 0; i < size; ++i) {
        Array[i] = 0;
    }

    return Array;
}

void *afiseazaVector(int *Array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << Array[i] << " ";
    }
    std::cout<<"\n";
    return Array;
}

void *editVector(int *Array, int size) {
    for (int i = 0; i < size; ++i)
        std::cin >> Array[i];
    return Array;
}

void *sortez(int *Array, int size) {
    std::sort(Array,Array+size);
    return Array;
}



int main() {
    int size;
    int *arr = alocaVector(size);
    afiseazaVector(arr,size);
    editVector(arr,size);
    afiseazaVector(arr,size);
    sortez(arr,size);
    afiseazaVector(arr,size);
    delete[] arr;
}