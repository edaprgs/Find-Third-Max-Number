/* Eda Grace J. Paragoso
2021-1574 - CSC124-CS2
*/

#include<iostream>
using namespace std;

int main()
{
    int intArray[] = {9, 7, 2, 5, 8};
    int arrLength = sizeof(intArray)/sizeof(intArray[0]);
    int maxA, maxB, maxC, thirdMax;

    cout << "The Array ...\n";
    for(int i = 0; i < arrLength; i++) {
        cout << intArray[i] << " ";
    } cout << "\n\n";

    // Initializing the first, second and third elements in the array as the three max numbers
    maxA = intArray[0];
    maxB = intArray[1];
    maxC = intArray[2];

    cout << "The Initialized Max Numbers ...\n";
    cout << ""<<maxA<<" "<<maxB<<" "<<maxC;
    cout << "\n";

    // To compare the ith element to the first, second and third element to check to see which is greater
    for(int i = 3; i < arrLength; i++) {
        // Update first, second and third max
        if(intArray[i] > maxA) {
            maxC = maxB;
            maxB = maxA;
            maxA = intArray[i];
        }
        // Update second and third max
        else if(intArray[i] > maxB) {
            maxC = maxB;
            maxB = intArray[i];
        }
        // Update third max
        else if(intArray[i] > maxC) {
            maxC = intArray[i];
        }
    }

    cout << "\nThe Max Numbers ...\n";
    cout << ""<<maxA<<" "<<maxB<<" "<<maxC;
    cout << "\n";

    // To compare the three max elements to get the thirdMax
    if(maxA <= maxB && maxA <= maxC) {
        thirdMax = maxA;
    } else if(maxB <= maxA && maxB <= maxC) {
        thirdMax = maxB;
    } else if(maxC <= maxA && maxC <= maxB) {
        thirdMax = maxC;
    }

    cout << "The Third Max is: " << thirdMax;

    return 0;
}
