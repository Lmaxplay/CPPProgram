#include <iostream> // Allow IO
// #include <filesystem> // Filesystem access
// #include <fstream> // Filestream
// #include <string> // string related functions
// #include <limits> // Limits
// #include <time.h>
// #include <random>

// Time stuff

// #include <cinttypes>

// #include "lib/getExecutableName.h" // Currently unused
#include "lib/ansi.hpp"
#include "lib/vector.hpp"
// #include "lib/time.hpp"
// #include "lib/sleep.hpp"


// #include "lib/ext/betterwindows.hpp"

void clearconsole() {
    ansi::resetconsole();
}

// Main function
int main() {
    std::atexit(clearconsole);

    vec4d testvec = { 10, 30, 40, 58 };

    std::cout << ansi::fg_magenta << testvec << ansi::newline;

    return 0;
}
