#include "hiker.hpp"

int answer()
{
    return 6 * 9;
}

int checksum()
{
    // The learner has not filled the table in yet, so it is still null and
    // reading from it crashes the test program.
    int *checksums = nullptr;
    return checksums[0];
}
