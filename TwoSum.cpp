#include <iostream>
using namespace std;
class TwoSum {
private:
    int nums[100];   
    int size;
public:
    void inputArray(int n) {
        size = n;
        cout << "Enter elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> nums[i];
        }
    }
    void findTwoSum(int target) {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    cout << "Indices: [" << i << ", " << j << "]";
                    return;
                }
            }
        }
        cout << "No solution found";
    }
};
int main() {
    TwoSum obj;
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    obj.inputArray(n);
    cout << "Enter target: ";
    cin >> target;
    obj.findTwoSum(target);
    return 0;
}