#include <stdio.h>

int is_valid(int row, int col) {
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}

int chessHorse(int n, int black_row, int black_col, int white_row, int white_col) {
    if (n == 0) {
        if (black_row == white_row && black_col == white_col) {
            return 1;
        } else {
            return 0;
        }
    }

    int moves[9][2] = {
        {2, 1}, {2, -1}, {1, 2}, {1, -2},
        {-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {0, 0}
    };

    for (int i = 0; i < 9; i++) {
        int new_black_row = black_row + moves[i][0];
        int new_black_col = black_col + moves[i][1];
        for (int j = 0; j < 9; j++)
        {
            int new_white_row = white_row + moves[j][0];
            int new_white_col = white_col + moves[j][1];
            if (is_valid(new_black_row, new_black_col) && is_valid(new_white_row, new_white_col)) {
                if (chessHorse(n - 1, new_black_row, new_black_col, new_white_row, new_white_col)) {
                    return 1;
                }
            }
        }

    }

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        char black[3], white[3];
        scanf("%s %s", black, white);

        int black_row = black[1] - '1';
        int black_col = black[0] - 'A';
        int white_row = white[1] - '1';
        int white_col = white[0] - 'A';

        printf("Case #%d: %s\n", i + 1, chessHorse(n, black_row, black_col, white_row, white_col) ? "YES" : "NO");
    }

    return 0;
}