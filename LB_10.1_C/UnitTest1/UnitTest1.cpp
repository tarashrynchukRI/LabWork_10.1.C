
#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include <fstream>
#include "../LB_10.1_C/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(Test)
{
public:
    TEST_METHOD(testCountABC)
    {
        std::ofstream file("test.txt");
        file << "abc\n";
        file << "abcdefabc\n";
        file << "xyz\n";
        file.close();

        Assert::AreEqual(3, countABC("test.txt"));
    }
};
