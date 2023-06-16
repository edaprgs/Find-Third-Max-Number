/* Eda Grace J. Paragoso
2021-1574 - CSC124-CS2
*/

#include<iostream>
using namespace std;

int main ()
{
    int i, j,temp;
    int arrA[] = {9, 7, 2, 5, 8};
    int arrlength = sizeof(arrA)/sizeof(arrA[0]);

    cout << "[Algorithm 1 - Bubble Sort]\n";
    cout << "\nThe List ...\n";
    for(i = 0; i < arrlength; i++) {
        cout << arrA[i] <<" ";
    }
    cout << endl;

    // To sort the elements of the array in descending order
    for(i = 0; i < arrlength; i++) {
        for(j = i+1; j < arrlength; j++) {
            if(arrA[j] > arrA[i]) {
                temp = arrA[i];
                arrA[i] = arrA[j];
                arrA[j] = temp;
            }
        }
    }

    // To display the sorted elements in descending order
    cout << "\nSorted Element List in Descending Order ...\n";
    for(i = 0; i < arrlength; i++) {
        cout << arrA[i] << " ";
    }

    int thirdMax = arrA[2];
    cout << "\n\nThe Third Max is: " << thirdMax;
    cout << "\n";

    return 0;
}



