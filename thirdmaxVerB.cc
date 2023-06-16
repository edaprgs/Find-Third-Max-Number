/* Eda Grace J. Paragoso
2021-1574 - CSC124-CS2
*/

#include<iostream>
using namespace std;

// Get the max element in an array
int getMaxElement(int getMax[], int n) {
    int maxElement = getMax[0];
    for(int i = 1; i < n; i++) {
        if(getMax[i] > maxElement) {
            maxElement = getMax[i];
        }
    }
    return maxElement;
}

// Remove all occurrences of the max element in an array
void removeMaxElement(int removeMax[], int &n, int maxElem) {
    for(int i = 0; i < n; i++) {
        if (removeMax[i] == maxElem) {
            for (int j = i; j < n-1; j++) {
                removeMax[j] = removeMax[j + 1];
            }
            n--;
            i--;
        }
    }
}

int main()
{
    int intArray[] = {9, 7, 2, 5, 8};
    int arrLength = sizeof(intArray)/sizeof(intArray[0]);

    // Print the array
    cout << "The Array ...\n";
    for(int i = 0; i < arrLength; i++) {
        cout << intArray[i] << " ";
    }

    // To get the first max element
    int firstMax = getMaxElement(intArray, arrLength);
    cout << "\nFirst Max: " << firstMax;

    // To get the second max element
    // To copy the array excluding the first max element
    removeMaxElement(intArray, arrLength, firstMax);

    // Print the updated array
    cout << "\n\nThe Updated Array ...\n";
    for(int i = 0; i < arrLength; i++) {
        cout << intArray[i] << " ";
    }

    int secondMax = getMaxElement(intArray, arrLength);
    cout << "\nSecond Max: " << secondMax;

    // To get the third max element
    // To copy the array excluding the first and second max element
    removeMaxElement(intArray, arrLength, secondMax);

    // Print the updated array
    cout << "\n\nThe Updated Array ...\n";
    for(int i = 0; i < arrLength; i++) {
        cout << intArray[i] << " ";
    }

    int thirdMax = getMaxElement(intArray, arrLength);
    cout << "\nThird Max: " << thirdMax;

    return 0;
}

