#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 3.1/Man.h"
#include "D:\project C++ 2\lab 3.1\lab 3.1\Student.h"
#include "D:\project C++ 2\lab 3.1\lab 3.1\Student.cpp"
#include "D:\project C++ 2\lab 3.1\lab 3.1\Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            std::stringstream input;
            std::string testName = "David";
            int testAge = 30;
            char testGender = 'M';
            double testWeight = 80.0;
            input << testName << std::endl << testAge << std::endl << testGender << std::endl << testWeight << std::endl;
            std::cin.rdbuf(input.rdbuf());
            Man testMan;
            testMan.Read();
            Assert::AreEqual(testName, testMan.getName());
            Assert::AreEqual(testAge, testMan.getAge());
            Assert::AreEqual(testGender, testMan.getGender());
            Assert::AreEqual(testWeight, testMan.getWeight());
        }
    };
}