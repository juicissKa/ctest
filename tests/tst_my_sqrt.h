#ifndef MY_SQRT_H
#define MY_SQRT_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(my_sqrtTest, num0) {
    ASSERT_EQ(my_sqrt(0), 0);
}

TEST(my_sqrtTest, num4) {
    ASSERT_EQ(my_sqrt(4), 2);
}

TEST(my_sqrtTest, negative) {
    ASSERT_EQ(my_sqrt(-1), 0);
}

TEST(my_sqrtTest, integrated) {
    ASSERT_EQ(my_sqrt(fibonachi(4)), sqrt(3));
}

#endif // MY_SQRT_H
