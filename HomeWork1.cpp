#include <iostream>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream fin;
    fin.open("in.txt");
    std::ofstream fout;
    int m, n;

    //arr1
    fin >> n;
    int* arr1 = new int [n]{0};
    for (int i = 0; i < n; i++) {
        fin >> arr1[i];
    }

    int k = arr1[0];
    for (int i = 0; i < n-1; i++) {
        arr1[i] = arr1[i+1];
    }
    arr1[n-1] = k;
 
    //arr2
    fin >> m;
    int* arr2 = new int [m] {0};
    for (int j = 0; j < m; j++) {
        fin >> arr2[j];
    }
    int l = arr2[m-1];
    for (int j = m-1; j > 0; j--) {
        arr2[j] = arr2[j-1];
    }
    arr2[0] = l;

    //endl
    fout << std::endl;
    
    //fout
    fout.open("out.txt");
    fout << m << std::endl;
    for (int j = 0; j < m; j++) {
        fout << arr2[j] << " ";
    }
    fout << std::endl;
    fout << n << std::endl;
    for (int i = 0; i < n; i++) {
        fout << arr1[i] << " ";
    }
    fout << std::endl;

    delete[] arr1;
    delete[] arr2;
}

