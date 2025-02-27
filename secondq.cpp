#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of locations: ";
    cin >> rows;
    cout << "Enter number of time intervals: ";
    cin >> cols;

    double **temp = new double *[rows];
    for (int i = 0; i < rows; i++) {
        temp[i] = new double[cols];
    }

    cout << "Enter the temperature readings:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Location " << i + 1 << ", Time " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }

    double maxTemp = temp[0][0], minTemp = temp[0][0], sum = 0;
    int hotRow = 0, hotCol = 0, coldRow = 0, coldCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += temp[i][j];

            if (temp[i][j] > maxTemp) {
                maxTemp = temp[i][j];
                hotRow = i;
                hotCol = j;
            }
            if (temp[i][j] < minTemp) {
                minTemp = temp[i][j];
                coldRow = i;
                coldCol = j;
            }
        }
    }

    double avgTemp = sum / (rows * cols);
    cout << "\nhottest location" << hotRow + 1 << ", time " << hotCol + 1 << maxTemp <<  endl;
    cout << "coldest temp " << coldRow + 1 << ", time " << coldCol + 1 << minTemp  << endl;
    cout << "Overall avg temp: " << avgTemp ;

    return 0;
}
// the code uses double pointers to point towards the memory of the elements in the 2d array to compare and find out wat the coldest and hottest temperature is .
