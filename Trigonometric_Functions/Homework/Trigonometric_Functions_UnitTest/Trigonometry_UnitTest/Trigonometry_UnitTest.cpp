#include "pch.h"
#include "CppUnitTest.h" 
#include "Trigonometry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TrigonometryUnitTest
{
	TEST_CLASS(TrigonometryUnitTest)
	{
	public:
		
		TEST_METHOD(test_create_int_sen)
		{
			//Assert
			Trigonometry function;
			int sen_expected, sen_expected, base;
			base = 3;
			sen_expected = 0.1411;
			//Act
			int sen_result = function._sen(base);
			//Result
			Assert::AreEqual(sen_expected, sen_result);
		}

		TEST_METHOD(test_create_double_sen)
		{
			//Assert
			Trigonometry function;
			double sen_expected, sen_expected, base;
			base = 1.27;
			sen_expected = 0.9551;
			//Act
			double sen_result = function._sen(base);
			//Result
			Assert::AreEqual(sen_expected, sen_result);
		}

		TEST_METHOD(test_create_float_sen)
		{
			//Assert
			Trigonometry function;
			float sen_expected, sen_expected, base;
			base = 1.221;
			sen_expected = 0.93944;
			//Act
			float sen_result = function._sen(base);
			//Result
			Assert::AreEqual(sen_expected, sen_result);
		}

		TEST_METHOD(test_create_int_cos)
		{
			//Assert
			Trigonometry function;
			int cos_expected, cos_expected, base;
			base = 0;
			cos_expected = 1;
			//Act
			int cos_result = function._cos(base);
			//Result
			Assert::AreEqual(cos_expected, cos_result);
		}

		TEST_METHOD(test_create_double_cos)
		{
			//Assert
			Trigonometry function;
			double cos_expected, cos_expected, base;
			base = 5.12;
			cos_expected = 0.3964;
			//Act
			double cos_result = function._cos(base);
			//Result
			Assert::AreEqual(cos_expected, cos_result);
		}

		TEST_METHOD(test_create_float_cos)
		{
			//Assert
			Trigonometry function;
			float cos_expected, cos_expected, base;
			base = 0.847;
			cos_expected = 0.6622;
			//Act
			float cos_result = function._cos(base);
			//Result
			Assert::AreEqual(cos_expected, cos_result);
		}

		TEST_METHOD(test_create_int_tg)
		{
			//Assert
			Trigonometry function;
			int tg_expected, tg_expected, base;
			base = 0;
			tg_expected = 0;
			//Act
			int tg_result = function._tg(base);
			//Result
			Assert::AreEqual(tg_expected, tg_result);
		}

		TEST_METHOD(test_create_double_tg)
		{
			//Assert
			Trigonometry function;
			double tg_expected, tg_expected, base;
			base = 3.242;
			tg_expected = 0.100;
			//Act
			double tg_result = function._tg(base);
			//Result
			Assert::AreEqual(tg_expected, tg_result);
		}

		TEST_METHOD(test_create_float_tg)
		{
			//Assert
			Trigonometry function;
			float tg_expected, tg_expected, base;
			base = 2.4543;
			tg_expected = -0.8207;
			//Act
			float tg_result = function._tg(base);
			//Result
			Assert::AreEqual(tg_expected, tg_result);
		}
	};
}
