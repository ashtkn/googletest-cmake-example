#include <gtest/gtest.h>

#include "ClassA.hpp"

TEST(sumA1, normal) {
  ClassA target = {};
  ASSERT_EQ(3, target.sumA1(1, 2));
}

TEST(sumA2, normal) {
  ClassA target = {};
  ASSERT_EQ(3, target.sumA2(1, 2));
}
