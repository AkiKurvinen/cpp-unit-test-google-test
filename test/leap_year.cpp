#include <gtest/gtest.h>

#include "Date.h"

TEST(date_test, add) {
  int res;
  Date date = {1, 1, 2000};
  res = date.public_leap_year();
  ASSERT_NEAR(res, 1, 1.0e-11);
}
