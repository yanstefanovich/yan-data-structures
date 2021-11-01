#include <iostream>
#include <typeinfo>
#include <stdio.h>

using namespace std;
int main() {
    cout << "Declaring array \"Arr\" and assigning values to indicies after creation." << endl;
    int Arr[5];
    Arr[0] = 9;
    Arr[1] = 2;
    Arr[2] = 6;
    Arr[3] = 51;
    cout << "Each int index takes up 4 bytes and so the size of the array Arr, should be 20:" << endl;
    cout << "Size of Arr " << sizeof(Arr) << endl;
    cout << Arr[1] << endl;
    cout << "writing in c works in c++, although you may need to include stdio.h for certain syntax" << endl;
    printf("Arr[3] -> got %d, expecting 51\n\n", Arr[3]);

    cout << "Declaring + Initializing array \"Brr\" via assigning values to indicies during creation." << endl;
    int Brr[5] = {12,15,18,20,3};
    printf("Brr[3] -> Got %d, expecting 20\n\n", Brr[3]);

    cout << "Declaring + Initializing array \"Crr\" via assigning values to indicies during creation, but not specifying size. Allowing for size to be auto assigned." << endl;
    int Crr[] = {1,1,3,5};
    printf("Crr[2] -> Got %d, expecting 3\n\n", Crr[2]);

    cout << "Declaring + Initializing array \"Drr\" without initializing/assigning any values to demonstrate the values defaulting to 0." << endl;
    int Drr[3];
    printf("Drr[2] -> Got %d, expecting 0\n\n", Drr[2]);

    cout << "Declaring + Initializing array \"Err\"." << endl;
    int size = 3;
    int Err[size] = {2, 11};
    cout << "Looping over \"Err[]\" with a for loop" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Err[i] << " ";
    }
    cout << endl << endl;
    
    cout << "Declaring + Initializing array \"Frr\"." << endl;
    int Frr[5] = {1,2,3,4,5};
    cout << "Looping over \"Frr[]\" with a for each loop" << endl;
    for (int x:Frr) {
        cout << x << " ";
    }
    cout << endl << endl;

    int n;
    cout << "How long do you want the array \"Grr\" to be?" << endl;
    cin >> n;
    cout << "Declaring + Initializing array \"Grr\" with a dynamic value." << endl;
    cout << "Important to note that some compilers do not allow dynamic resource allocation." << endl;
    cout << "Looping over \"Grr[]\"" << endl;
    int Grr[n] = {1,2,3};
    for (int y:Grr) {
        cout << y << " ";
    }

    return 0;
} // namespace std;
