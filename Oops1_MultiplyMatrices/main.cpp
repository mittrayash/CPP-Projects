#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int multiply(int[][3], int[][3]);
int row1, row2, column1, column2;
int main()

{
    int i, j, mat1[3][3], mat2[3][3];
    cout << "No. of rows & columns of first matrix: " << endl;
    cin >> row1 >> column1;
    //cout << row1 << " "  << column1;

    cout << "No. of rows & columns of second matrix: " << endl;
    cin >> row2 >> column2;

    if (column1 != row2){
        cout << "Columns of first matrix must be equal to rows of second matrix";
        exit(1);
    }
    cout << "Enter the " << row1*column1 << " elements of the first matrix" << endl;
    for (i = 0; i < row1; i++){
        for(j = 0; j < column1; j++){
            cin >> mat1[i][j];
        }
    }
    /*for (i = 0; i < row1; i++){
        for(j = 0; j < column1; j++){
            cout << mat1[i][j]<< " ";
        }
        cout << endl;
        }*/
    cout << "Enter the " << row2*column2 << " elements of the second matrix" << endl;
    for (i = 0; i < row2; i++){
        for(j = 0; j < column2; j++){
            cin >> mat2[i][j];
        }
    }

    multiply(mat1, mat2);


    return 0;
}

int multiply(int x[][3], int y[][3]){
    int i, j, k, mat[3][3], sum = 0;
   // printf ("%d, %d, %d, %d", row1, row2, column1, column2);
   cout << endl;
    for(i = 0; i < row1; i++){
        for(j = 0; j< column1; j++){
            for(k = 0; k< column2; k++){
              sum = sum + x[i][k]*y[k][j];
            }
          mat[i][j] = sum;
        sum = 0;
        }
    }
    for (i = 0; i < row1; i++){
        for(j = 0; j < column1; j++){
            cout << mat[i][j]<< " ";
        }
        cout << endl;
        }


return 0;
}
