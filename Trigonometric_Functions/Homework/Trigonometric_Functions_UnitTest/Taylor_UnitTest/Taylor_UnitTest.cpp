#include "pch.h"
#include "CppUnitTest.h"
#include "Taylor_Series.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TaylorUnitTest
{
	TEST_CLASS(TaylorUnitTest)
	{
	public:
		
		TEST_METHOD(test_int_sen_Taylor)
		{
			//Assert 
			Taylor_Series taylor;
			int index = 1;
			int sen_expected, base;
			base = 0;
			sen_expected = 0;
			//Act
			int sen_result = taylor._taylor_seno(base, index);
			//Result
			Assert::AreEqual(sen_expected, sen_result);
		}

		TEST_METHOD(test_double_sen_Taylor) 
		{
			//Assert 
			Taylor_Series taylor;
			int index = 1;
			double sen_expected, base;
			base = 2.34;
			sen_expected = 0.56;
			//Act
			double sen_result = taylor._taylor_seno(base, index);
			//Result
			Assert::AreEqual(sen_expected, sen_result);
		}

		TEST_METHOD(test_float_sen_Taylor)
		{
			//Assert 
			Taylor_Series taylor;
			int index = 1;
			float sen_expected, base;
			base = 3.2234;
			sen_expected = -0.08171;
			//Act
			float sen_result = taylor._taylor_seno(base, index);
			//Result
			Assert::AreEqual(sen_expected, sen_result);
		}

		TEST_METHOD(test_int_cos_Taylor)
		{
			//Assert 
			Taylor_Series taylor;
			int index = 1;
			int cos_expected, base;
			base = 0;
			cos_expected = 1;
			//Act
			int cos_result = taylor._taylor_seno(base, index);
			//Result
			Assert::AreEqual(cos_expected, cos_result);
		}

		TEST_METHOD(test_double_cos_Taylor)
		{
			//Assert 
			Taylor_Series taylor;
			int index = 1;
			float cos_expected, base;
			base = 1.32;
			cos_expected = 0.2481;
			//Act
			float cos_result = taylor._taylor_seno(base, index);
			//Result
			Assert::AreEqual(cos_expected, cos_result);
		}

		TEST_METHOD(test_float_cos_Taylor)
		{
			//Assert 
			Taylor_Series taylor;
			int index = 1;
			int cos_expected, base;
			base = 4.3243;
			cos_expected = -0.378420;
			//Act
			int cos_result = taylor._taylor_seno(base, index);
			//Result
			Assert::AreEqual(cos_expected, cos_result);
		}
	};
}
