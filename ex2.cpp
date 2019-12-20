#include <iostream>
using namespace std;

int **alocaMatrice(int &N,int &M) {
    cin >> N >> M;
    int** ary = new int*[N];
    for(int i = 0; i < N; ++i)
        ary[i] = new int[M];
    return ary;
}
void **editMatrice(int **ary, int &N, int &M) {
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            cin >> ary[i][j];
    return nullptr;

}

void **printeazaMatrice(int &N, int **ary, int &M) {
    for(int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << ary[i][j] << " ";
        }
        cout << "\n";
    }
    return nullptr;
}

int **patrat(int &N, int &M, int **ary) {
    int **alta =  new int*[N];
    for(int i = 0; i < N; ++i)
        alta[i] = new int[M];

    for(int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (ary[i][j] * ary[i][j])
                alta[i][j] = ary[i][j] * ary[i][j];
        }
    }
    return alta;
}

void **sumadiag(int &N, int &M, int **ary) {
    int d1sum = 0;
    for(int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (i == j)
                d1sum +=ary[i][j];
        }
    }
    cout <<"\n" << d1sum;
    return nullptr;
}

int main() {
    int n,m;
    int **arr = alocaMatrice(n, m);
    int **alta;
    editMatrice(arr, n, m);
    printeazaMatrice(n, arr, m);
    alta = patrat(n, m, arr);
    printeazaMatrice(n,alta,m);
    cout << "\n";
    printeazaMatrice(n,arr,m);
    sumadiag(n,m,arr);

}