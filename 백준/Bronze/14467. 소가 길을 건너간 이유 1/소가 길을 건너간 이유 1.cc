#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> cow_positions;
    int changes = 0; 

    for (int i = 0; i < n; i++) {
        int cow_id, position;
        cin >> cow_id >> position;

        if (cow_positions.find(cow_id) == cow_positions.end()) {
            cow_positions[cow_id] = position;
        }
        else {
            if (cow_positions[cow_id] != position) {
                changes++;
                cow_positions[cow_id] = position; 
            }
        }
    }

    cout << changes << endl;
    return 0;
}
