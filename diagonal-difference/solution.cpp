#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int leftDiagonal = 0;
    int rightDiagonal = 0;

    for (int i = 0; i < n; i++) {
        leftDiagonal += arr[i][i];
        rightDiagonal += arr[i][n - 1 - i];
    }

    return abs(leftDiagonal - rightDiagonal);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr) << endl;

    return 0;
}