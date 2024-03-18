#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "merge_sort.hpp"

TEST(ArraysEqual, AnyElementsCount) {
std::vector<long long> actual = {1, 8, 2, 5, 3, 11};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {1, 2, 3, 5, 8, 11};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}

TEST(ArraysEqual, BigElements) {
std::vector<long long> actual = {3, 8999999, 0, 223372036854, 9223372036854775807, 11233321};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {0, 3, 8999999, 11233321, 223372036854, 9223372036854775807};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}

TEST(ArraysEqual, TheSameElements) {
std::vector<long long> actual = {1, 1, 1, 1, 1, 1};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {1, 1, 1, 1, 1, 1};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}

TEST(ArraysEqual, FirstLast) {
std::vector<long long> actual = {999, 1, 1, 1, 1, 0};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {0, 1, 1, 1, 1, 999};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}

TEST(ArraysEqual, AlreadySorted) {
std::vector<long long> actual = {1, 521, 900, 8132, 100000, 23456789};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {1, 521, 900, 8132, 100000, 23456789};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}

TEST(ArraysEqual, Reversed) {
std::vector<long long> actual = {7932, 124, 123, 44, 5, 3};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {3, 5, 44, 123, 124, 7932};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}

TEST(ArraysEqual, PartlySorted) {
std::vector<long long> actual = {4, 13, 16, 78, 90, 12, 43, 1, 3, 2};
MergeNameSpace::merge_sort(actual, 0, actual.size() - 1);
std::vector<long long> expected = {1, 2, 3, 4, 12, 13, 16, 43, 78, 90};

ASSERT_EQ(expected.size(), actual.size())
<< "Different sizes of expected and sorted arrays";

for (int i = 0; i < actual.size(); i++) {
ASSERT_EQ(expected[i], actual[i])
<< "The array expected and sorted differ in the element with the index: "
<< i;
}
}




int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}