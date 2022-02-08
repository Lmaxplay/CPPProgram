#include <iostream> // Allow IO
#include <filesystem> // Filesystem access
#include <windows.h> // Windows API
#include <direct.h> // Direct API
#include <fstream> // Filestream
#include <string> // string related functions
#include <limits> // Limits

// #include "lib/getExecutableName.h" // Currently unused
#include "lib/terminalstyle.hpp"
#include "lib/vector.hpp"

using namespace std;

// Main function
int main() {

    vec4ld a = {10.0, 20.0, 30.0, 20.0};
    vec4ld b = {10.0, 20.0, 30.0, 10.0};
    vec4ld c = a + b;

    coutgreen << "Of the vector (" << c << ") the length is: " << c.getmagnitude() << " its size is: " << sizeof(c) << "\n";
    consolereset;
    return 0;
}
