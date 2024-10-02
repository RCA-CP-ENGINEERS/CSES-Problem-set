#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        long long y, x;
        cin >> y >> x; // Read the coordinates (y, x)

        long long layer = max(y, x);
        long long largest = layer * layer;
        long long number;

        if (layer % 2 == 0) { // Even layer
            if (y < x) { // Moving down from top-right corner
                number = largest - (layer - 1 - (x - 1));
            } else { // Moving left from top-right corner
                number = largest - (y - 1);
            }
        } else { // Odd layer
            if (y < x) { // Moving right from bottom-left corner
                number = largest - (x - 1);
            } else { // Moving up from bottom-left corner
                number = largest - (layer - 1 - (y - 1));
            }
        }

        cout << number << endl; // Output the result
    }

    return 0;
}
