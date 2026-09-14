#include "hiker.hpp"

// Neither table has been filled in yet, so both are still null and reading
// from either one crashes the test program.

int answer()
{
    int *answers = nullptr;
    return answers[0];
}

int checksum()
{
    int *checksums = nullptr;
    return checksums[0];
}
