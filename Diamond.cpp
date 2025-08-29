#include <iostream>
using namespace std;

int main() {
    int n = 5; // Maximum number of stars

    int total_lines = 2 * n - 1;

    for (int i = 0; i < total_lines; i++) {
        int stars;

        if (i < n)
            stars = n - i;         // Top half: 5 4 3 2 1
        else
            stars = i - n + 2;     // Bottom half: 2 3 4 5

        int spaces = n - stars;    // Center alignment

        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}