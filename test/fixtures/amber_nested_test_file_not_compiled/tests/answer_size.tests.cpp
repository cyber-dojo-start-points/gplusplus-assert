#include "tests/answer_size.tests.hpp"
#include "hiker.hpp"
#include <cassert>

// The makefile gathers its source files with $(wildcard *.cpp), which looks
// in this directory only, so a test file in a sub-directory is never
// compiled. main() calls it through the header beside this file, and the
// link fails for want of the definition.
void the_answer_is_two_digits_long()
{
    assert(answer() > 9 && answer() < 100);
}
