#include "test_types.h"
#include "test_functions.h"
#include "tst_operations.h"

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
