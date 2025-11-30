
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter row Number of Matrix: ";
    cin >> m;
    cout << "Enter column Number of Matrix: ";
    cin >> n;
    int matA[m][n],matB[n][m];
    cout << "Enter Elements of rectangular matrix A : " << endl;

    for (int row=0;row<m;row++)
    {
        for (int col=0;col<n;col++)
        {
            cout << "A["<<row<<"]["<<col<<"]: ";
            cin >> matA[row][col];
        }
    }
    for(int row=0;row<m;row++)
    {
        for (int col=0;col<n;col++)
        {
            matB[col][row] = matA[row][col];
        }
    }
    cout << " Transpose of matrix A is matrix B:" <<endl;

    for (int row=0;row<n;row++)
    {
        cout << "\t";
        for (int col=0;col<m;col++)
        {
            cout << matB[row][col] << "  ";
        }
        cout << endl;
    }

    return 0;

}
