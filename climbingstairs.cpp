#include <iostream>
using namespace std;

class Climb {
public:
    int climbStairs(int x) {
        if (x <= 1)
            return 1; // 1 way to climb 0 or 1 step

        int prev2 = 1;
        int prev = 1;

        for (int i = 2; i <= x; i++) {
            int cur = prev2 + prev;
            prev2 = prev;
            prev = cur;
        }

        return prev;
    }
};

int main() {
    Climb Climbs; // Object instance
    int x;
    cin >> x;
    // Call member function on the OBJECT (Climbs), not the CLASS (Climb)
    cout << "climbing stairs: " << Climbs.climbStairs(x) << endl;

    return 0;
}