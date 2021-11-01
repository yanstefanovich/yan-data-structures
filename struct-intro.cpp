#include <iostream>
#include <stdio.h>

using namespace std;

/*
Different declaration styles of structs
```c
struct Rectangle {
    int length;
    int width;
} r, rec, rectangle;
```
Can declare variable(s) right as/after the struct is defined
Can comma seperate for multiple variable definitions
These are/become global variables accessible by all of the functions
This style of declaration is analogous to:
```c
struct Rectangle r0;
```
*/

struct Rectangle {
    int length;
    int width;
    char x;
    // Notice how it allocates 4 bytes to a char in this case instead of the expected 1
    // It will only use one byte but is easier for the machine to allocate 4
    // This memory adjustment is called "padding"
    // This padding is done inside of structures
};

int main() {
    cout << "Structures" << endl << endl;
    cout << "Declaring + Initializing \"Rectangle\" structure \"r1\"" << endl;
    struct Rectangle r1 = {2, 5};
    printf("Size of \"Rectangle\" struct \"r1\": %d bytes\n", sizeof(r1));
    cout << "r1.length: " << r1.length << endl;
    cout << "r1.width: " << r1.width << endl;
    cout << "r1.x: " << r1.x << endl;
    cout << "assign new values to members" << endl;
    r1.length = 1;
    r1.width = 12;
    cout << "r1.length: " << r1.length << endl;
    cout << "r1.width: " << r1.width << endl;
    return 0;
} // namespace std
