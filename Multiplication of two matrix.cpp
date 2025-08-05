//EXPERIMENT-5
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

int main() {
    int rows1, cols1;
    int rows2, cols2;
    cout << "Enter number of rows and columns for Matrix 1: ";
    cin >> rows1 >> cols1;
    cout << "Enter number of rows and columns for Matrix 2: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return 1;
    }

    int M1[rows1][cols1], M2[rows2][cols2], M3[rows1][cols2];
    cout << "Enter elements of Matrix M1:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> M1[i][j];
        }
    }
    cout << "Enter elements of Matrix M2:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> M2[i][j];
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            M3[i][j] = 0;
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    cout << "Resultant matrix M3:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << M3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* output :
Enter number of rows and columns for Matrix 1: 2 2
Enter number of rows and columns for Matrix 2: 2 2
Enter elements of Matrix M1:
1 2 3 4
Enter elements of Matrix M2:
1 2 3 4
Resultant matrix M3:
7 10 
15 22 
*/
