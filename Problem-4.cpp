#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    unordered_map<int, int> count;

    // Initialize counts for 1–9
    for (int i = 1; i <= 9; i++) {
        count[i] = 0;
    }

    // Check divisibility
    for (int num : nums) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                count[i]++;
            }
        }
    }

    // Print results
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i] << endl;
    }

    return 0;
}
