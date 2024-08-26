#include "Unity/src/unity.h"
#include "primo.h"


void setUp(void) {

}

void tearDown(void) {

}

void test_primo(void) {
    TEST_ASSERT_EQUAL(0, primo(1));
    TEST_ASSERT_EQUAL(1, primo(2));
    TEST_ASSERT_EQUAL(0, primo(4));
    TEST_ASSERT_EQUAL(1, primo(5));
    TEST_ASSERT_EQUAL(0, primo(9));
    TEST_ASSERT_EQUAL(1, primo(11));
    TEST_ASSERT_EQUAL(1, primo(13));
    TEST_ASSERT_EQUAL(0, primo(15));
    TEST_ASSERT_EQUAL(1, primo(17));
    TEST_ASSERT_EQUAL(1, primo(19));
    TEST_ASSERT_EQUAL(0, primo(21));
    TEST_ASSERT_EQUAL(1, primo(23));
    TEST_ASSERT_EQUAL(0, primo(25));
    TEST_ASSERT_EQUAL(0, primo(27));
    TEST_ASSERT_EQUAL(1, primo(29));
}

void test_proxPrimo(void) {
    TEST_ASSERT_EQUAL(2, proxPrimo(1));
    TEST_ASSERT_EQUAL(3, proxPrimo(2));
    TEST_ASSERT_EQUAL(5, proxPrimo(3));
    TEST_ASSERT_EQUAL(7, proxPrimo(5));
    TEST_ASSERT_EQUAL(11, proxPrimo(7));
    TEST_ASSERT_EQUAL(13, proxPrimo(11));
    TEST_ASSERT_EQUAL(17, proxPrimo(13));
    TEST_ASSERT_EQUAL(19, proxPrimo(17));
    TEST_ASSERT_EQUAL(23, proxPrimo(19));
    TEST_ASSERT_EQUAL(29, proxPrimo(23));
    TEST_ASSERT_EQUAL(31, proxPrimo(29));
    TEST_ASSERT_EQUAL(37, proxPrimo(31));
    TEST_ASSERT_EQUAL(41, proxPrimo(37));
    TEST_ASSERT_EQUAL(43, proxPrimo(41));
    TEST_ASSERT_EQUAL(47, proxPrimo(43));
}

void test_verificaNumero(void) {
    TEST_ASSERT_EQUAL(1, verificaNumero(-5));
    TEST_ASSERT_EQUAL(1, verificaNumero(0));
    TEST_ASSERT_EQUAL(1, verificaNumero(2.5));
    TEST_ASSERT_EQUAL(0, verificaNumero(5));
    TEST_ASSERT_EQUAL(0, verificaNumero(7));
    TEST_ASSERT_EQUAL(0, verificaNumero(11));
    TEST_ASSERT_EQUAL(1, verificaNumero(-10));
    TEST_ASSERT_EQUAL(0, verificaNumero(13));
    TEST_ASSERT_EQUAL(1, verificaNumero(-3.14));
    TEST_ASSERT_EQUAL(0, verificaNumero(17));
    TEST_ASSERT_EQUAL(1, verificaNumero(-1));
    TEST_ASSERT_EQUAL(1, verificaNumero(4.5));
    TEST_ASSERT_EQUAL(1, verificaNumero(10.99));
    TEST_ASSERT_EQUAL(0, verificaNumero(19));
    TEST_ASSERT_EQUAL(0, verificaNumero(23));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_primo);
    RUN_TEST(test_proxPrimo);
    RUN_TEST(test_verificaNumero);
    return UNITY_END();
}
