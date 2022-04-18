#include <gtest/gtest.h>
#include "Date.h"

TEST(date_test, in_same_year) {
  int res;
  Date date_one = {1, 1, 2001};
  Date date_two = {2, 1, 2001};

  res = date_one.public_days_between(&date_two);
  ASSERT_EQ(res, 1);
}
TEST(date_test, in_rev_order) {
  int res;
  Date date_one = {2, 1, 2001};
  Date date_two = {1, 1, 2001};

  res = date_one.public_days_between(&date_two);
  ASSERT_EQ(res, 1);
}
TEST(date_test, in_diff_year) {
  int res;
  Date date_one = {1, 1, 1999};
  Date date_two = {1, 1, 2000};

  res = date_one.public_days_between(&date_two);
  ASSERT_EQ(res, 365);
}
TEST(date_test, in_leap_year) {
  int res;
  Date date_one = {1, 1, 2000};
  Date date_two = {1, 1, 2001};

  res = date_one.public_days_between(&date_two);
  ASSERT_EQ(res, 366);
}
TEST(date_test, very_long_time) {
  int res;
  Date date_one = {1, 1, 1960};
  Date date_two = {1, 1, 2000};

  res = date_one.public_days_between(&date_two);
  ASSERT_EQ(res, 14610);
}