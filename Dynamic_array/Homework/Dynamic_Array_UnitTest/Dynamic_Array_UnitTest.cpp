#include "pch.h"
#include "CppUnitTest.h"
#include "../Dynamic_Array/Dynamic_Array.cpp"
#include "../MCD_MCM/MCD_MCM.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DynamicArrayUnitTest
{
	TEST_CLASS(DynamicArrayUnitTest)
	{
	public:
		
		TEST_METHOD(test_create_int_array)
		{
			//Assert
			Array_dynamic _array;
			int* _array_expected;
			_array_expected = _array._create_array(4, _array_expected);
			//Act
			int* _array_result = (int*)malloc(4 * sizeof(int));
			//Result
			Assert::AreEqual(_array_expected, _array_result);
		}

		TEST_METHOD(test_create_float_array)
		{
			//Assert
			Array_dynamic _array;
			float* _array_expected;
			_array_expected = _array._create_array(4, _array_expected);
			//Act
			float* _array_result = (float*)malloc(4 * sizeof(float));
			//Result
			Assert::AreEqual(_array_expected, _array_result);
		}

		TEST_METHOD(test_create_double_array)
		{
			//Assert
			Array_dynamic _array;
			double* _array_expected;
			_array_expected = _array._create_array(4, _array_expected);
			//Act
			double* _array_result = (double*)malloc(4 * sizeof(double));
			//Result
			Assert::AreEqual(_array_expected, _array_result);
		}

		TEST_METHOD(test_set_cero)
		{
			//Assert
			Array_dynamic _array;
			double* _array_result;
			double* _array_expected = (double*)malloc(4 * sizeof(double));
			for (int i = 0; i < 4; i++) {
				*(_array_expected + i) = 0;
			}
			//Act
			_array_result = _array._create_array(4, _array_expected);
			_array._set_cero(4, _array_result);
			//Result
			Assert::AreEqual(_array_expected, _array_result);
		}

		TEST_METHOD(test_commun_minum_by_using_double)
		{
			//Assert
			Array_dynamic _array;
			MCD_MCM mcd_mcm;
			double* _array_for_test;
			_array_for_test = _array._create_array(4, _array_for_test);
			for (int i = 0; i < 4; i++) {
				*(_array_for_test + i) = i + 1;
			}
			int result = 12;
			//Act
			int expected = mcd_mcm._commun_minum(_array_for_test, 4);
			//Result
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(test_commun_minum_by_using_float)
		{
			//Assert
			Array_dynamic _array;
			MCD_MCM mcd_mcm;
			float* _array_for_test;
			_array_for_test = _array._create_array(4, _array_for_test);
			for (int i = 0; i < 4; i++) {
				*(_array_for_test + i) = i + 1;
			}
			int result = 12;
			//Act
			int expected = mcd_mcm._commun_minum(_array_for_test, 4);
			//Result
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(test_commun_minum_by_using_int)
		{
			//Assert
			Array_dynamic _array;
			MCD_MCM mcd_mcm;
			int* _array_for_test;
			_array_for_test = _array._create_array(4, _array_for_test);
			for (int i = 0; i < 4; i++) {
				*(_array_for_test + i) = i + 1;
			}
			int result = 12;
			//Act
			int expected = mcd_mcm._commun_minum(_array_for_test, 4);
			//Result
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(test_commun_maximum_by_using_double)
		{
			//Assert
			Array_dynamic _array;
			MCD_MCM mcd_mcm;
			double* _array_for_test;
			_array_for_test = _array._create_array(4, _array_for_test);
			for (int i = 0; i < 4; i++) {
				*(_array_for_test + i) = i + 1;
			}
			int result = 12;
			//Act
			int expected = mcd_mcm._commun_minum(_array_for_test, 4);
			//Result
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(test_commun_maximum_by_using_float)
		{
			//Assert
			Array_dynamic _array;
			MCD_MCM mcd_mcm;
			float* _array_for_test;
			_array_for_test = _array._create_array(4, _array_for_test);
			for (int i = 0; i < 4; i++) {
				*(_array_for_test + i) = i + 1;
			}
			int result = 12;
			//Act
			int expected = mcd_mcm._commun_minum(_array_for_test, 4);
			//Result
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(test_commun_maximum_by_using_int)
		{
			//Assert
			Array_dynamic _array;
			MCD_MCM mcd_mcm;
			int* _array_for_test;
			_array_for_test = _array._create_array(4, _array_for_test);
			for (int i = 0; i < 4; i++) {
				*(_array_for_test + i) = i + 1;
			}
			int result = 12;
			//Act
			int expected = mcd_mcm._commun_minum(_array_for_test, 4);
			//Result
			Assert::AreEqual(expected, result);
		}
	};
}
