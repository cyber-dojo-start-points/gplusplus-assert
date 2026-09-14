#include "hiker.hpp"

int answer()
{
    // The learner has not filled the table in yet, so it is still null and
    // reading from it crashes the test program.
    int *answers = nullptr;
    return answers[0];
}
