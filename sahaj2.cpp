#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> createBattlefield(int m, int n, const vector<char>& targets, const vector<int>& columnIndices, const vector<int>& rowPointers) {
    vector<vector<char>> battlefield(m, vector<char>(n, 'z'));

    for (int row = 0; row < m; ++row) {
        for (int col = rowPointers[row]; col < rowPointers[row + 1]; ++col) {
            battlefield[row][columnIndices[col]] = targets[col];
        }
    }

    return battlefield;
}
    
int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<char> targets;
    vector<int> columnIndices;
    vector<int> rowPointers(m + 1);

    cout << "Enter the targets (e.g., 'a', 'b', ...): ";
    for (int i = 0; i < m * n; ++i) {
        char target;
        cin >> target;
        targets.push_back(target);
    }

    cout << "Enter the column indices (e.g., 5 1 6 3 3 ...): ";
    for (int i = 0; i < m * n; ++i) {
        int columnIndex;
        cin >> columnIndex;
        columnIndices.push_back(columnIndex);
    }

    cout << "Enter the row pointers (e.g., 0 1 3 4 7 ...): ";
    for (int i = 0; i <= m; ++i) {
        cin >> rowPointers[i];
    }

    vector<vector<char>> battlefield = createBattlefield(m, n, targets, columnIndices, rowPointers);

    // Printing the battlefield
    cout << "Battlefield:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << battlefield[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
