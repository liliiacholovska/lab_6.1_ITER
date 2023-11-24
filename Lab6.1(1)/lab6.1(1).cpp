#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void fillArray(int b[]) {
    for (int i = 0; i < 21; ++i) {
        b[i] = rand() % (90 - 10 + 1) + 10;
    }
}

void printArray(const int b[]) {
    for (int i = 0; i < 21; ++i) {
        cout << setw(4) << b[i];
    }
    cout << endl;
}

void processArray(int b[], int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < 21; ++i) {
        if (!(b[i] % 2 != 0 && b[i] % 3 == 0)) {
            count++;
            sum += b[i];
            b[i] = 0;
        }
    }
}

int main() {
    srand(time(0));

    int myArray[25];
    int count, sum;

    fillArray(myArray);
    cout << "Original Array: ";
    printArray(myArray);

    processArray(myArray, count, sum);
    cout << "Modified Array: ";
    printArray(myArray);
    cout << "Count of elements satisfying the criteria: " << count << endl;
    cout << "Sum of elements satisfying the criteria: " << sum << endl;

    return 0;
}