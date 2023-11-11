#include <gtest/gtest.h>
#include "gs.cpp"  // 包含gs.cpp

class GrayScottTest : public ::testing::Test {
protected:
    void SetUp() override {
        // 重置模拟状态
        init();
    }
};

// 测试模型参数类型是否匹配
TEST_F(GrayScottTest, ParameterTypeCheck) {
    // 检查F和k的类型是否与u和v的元素类型相同
    ASSERT_EQ(typeid(F), typeid(u[0][0]));
    ASSERT_EQ(typeid(k), typeid(v[0][0]));
}

// 测试u和v是否同大小
TEST_F(GrayScottTest, VariablesSizeCheck) {
    ASSERT_EQ(u.size(), v.size());
    if (!u.empty()) {
        ASSERT_EQ(u[0].size(), v[0].size());
    }
}

// 测试u = 0 和 v = 0 时的模拟结果
TEST_F(GrayScottTest, MathematicalCorrectnessWhenZero) {
    // 将u和v的所有元素设置为0
    for (auto& row : u) {
        std::fill(row.begin(), row.end(), 0.0);
    }
    for (auto& row : v) {
        std::fill(row.begin(), row.end(), 0.0);
    }

    // 执行一次模拟步骤
    simulateStep();

    // 检查u和v的值是否符合预期（根据模拟的数学逻辑）
    // 此处需要具体的数学逻辑来确定预期值
    // 例如：
    // ASSERT_EQ(u[某个索引][某个索引], 预期值);
    // ASSERT_EQ(v[某个索引][某个索引], 预期值);
}
