#include <stdio.h>
#include <stdbool.h>

int board[20];
int n;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row)
            return false;
    }
    return true;
}

void solve(int row) {
    if (row == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i] == j) printf("Q ");
                else printf(". ");
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < n; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    printf("Enter N: ");
    scanf("%d", &n);
    solve(0);
    return 0;
}
