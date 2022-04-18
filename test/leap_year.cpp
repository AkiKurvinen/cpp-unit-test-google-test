#include <gtest/gtest.h>

#include "Date.h"

TEST(date_test, is_leap_year) {
  int res;
  Date date = {1, 1, 2000};
  res = date.public_leap_year();
  ASSERT_TRUE(res, 1, 1.0e-11);
}
TEST(date_test, not_leap_year) {
  int res;
  Date date = {1, 1, 2001};
  res = date.public_leap_year();
  ASSERT_FALSE(res, 1, 1.0e-11);
}
