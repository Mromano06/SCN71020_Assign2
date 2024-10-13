#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getArea(int*, int*);
extern "C" int getPerimeter(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RecUnitTest
{
	TEST_CLASS(RecUnitTest)
	{
	public:
		
		TEST_METHOD(PerimeterOfRec_Perimeter2Width5_ReturnPerimeter14)
		{
			int actualPerimiter = 0, length = 2, width = 5;
			actualPerimiter = getPerimeter(&length, &width);
			Assert::AreEqual(14, actualPerimiter);
		}

		TEST_METHOD(AreaOfRec_Length3Width4_ReturnArea12)
		{
			int actualArea = 0, length = 3, width = 4;
			actualArea = getArea(&length, &width);
			Assert::AreEqual(12, actualArea);
		}
		TEST_METHOD(SetWidth_Input0_ReturnInvalidInput)
		{
			int inputWidth = 1;
			setWidth(0, &inputWidth);
			Assert::AreNotEqual(0, inputWidth);
		}

		TEST_METHOD(SetWidth_InputNegative10_ReturnInvalidInput)
		{
			int inputWidth = 0;
			setWidth(-10, &inputWidth);
			Assert::AreNotEqual(-10, inputWidth);
		}

		TEST_METHOD(SetWidth_Input101_ReturnInvalidInput)
		{
			int inputWidth = 0;
			setWidth(101, &inputWidth);
			Assert::AreNotEqual(101, inputWidth);
		}

		TEST_METHOD(SetPerimeter_Input0_ReturnInvalidInput)
		{
			int inputPerimeter = 1;
			setWidth(0, &inputPerimeter);
			Assert::AreNotEqual(0, inputPerimeter);
		}

		TEST_METHOD(SetPerimeter_InputNegative5_ReturnInvalidInput)
		{
			int inputPerimeter = 0;
			setWidth(-5, &inputPerimeter);
			Assert::AreNotEqual(-5, inputPerimeter);
		}

		TEST_METHOD(SetPerimeter_Input1_ReturnValidInput)
		{
			int inputPerimeter = 1;
			setWidth(1, &inputPerimeter);
			Assert::AreEqual(1, inputPerimeter);
		}

	};
}
