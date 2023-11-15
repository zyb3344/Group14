#include <gtest/gtest.h>
#define TESTING
#include "../external/gray-scott-sim/gs.cpp"

TEST(GSModel, DataTypeTest) {
    ASSERT_TRUE((std::is_same<decltype(F), double>::value));
    ASSERT_TRUE((std::is_same<decltype(k), double>::value));
}

TEST(GSModel, DimensionTest) {
    init(); 
    ASSERT_EQ(u.size(), v.size());
    for (size_t i = 0; i < u.size(); ++i) {
        ASSERT_EQ(u[i].size(), v[i].size());
    }
}

TEST(GSModel, ZeroStateTest) {
    F = 0.0;
    k = 0.0;
    init();
    for (auto& row : u) std::fill(row.begin(), row.end(), 0.0);
    for (auto& row : v) std::fill(row.begin(), row.end(), 0.0);
    
    simulateStep(); 

    for (const auto& row : u) {
        for (const auto& val : row) {
            ASSERT_NEAR(val, 0.0, 0.1); 
        }
    }

    for (const auto& row : v) {
        for (const auto& val : row) {
            ASSERT_NEAR(val, 0.0, 0.1); 
        }
    }
}
