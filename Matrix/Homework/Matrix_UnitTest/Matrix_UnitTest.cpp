#include "pch.h"
#include "CppUnitTest.h"

#include "../Matrix_/Matrix.cpp"
#include "../Matrix_operation/Matrix_operation.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MatrixUnitTest
{
	TEST_CLASS(MatrixUnitTest)
	{
	public:
		
		TEST_METHOD(test_create_matrix_int)
		{
			//Assert
			Matrix _matrix;
			int** _matrix_expected;
			_matrix_expected = (int**)malloc(3 * sizeof(int*));
			for (int i = 0; i < 3; i++) {
				*(_matrix_expected + i) = (int*)malloc(3 * sizeof(int));
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 0;
				}
				
			}
			//Act
			int** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_create_matrix_float)
		{
			//Assert
			Matrix _matrix;
			float** _matrix_expected;
			_matrix_expected = (float**)malloc(3 * sizeof(float*));
			for (int i = 0; i < 3; i++) {
				*(_matrix_expected + i) = (float*)malloc(3 * sizeof(float));
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 0;
				}

			}
			//Act
			float** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_create_matrix_double)
		{
			//Assert
			Matrix _matrix;
			double** _matrix_expected;
			_matrix_expected = (double**)malloc(3 * sizeof(double*));
			for (int i = 0; i < 3; i++) {
				*(_matrix_expected + i) = (double*)malloc(3 * sizeof(double));
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 0;
				}

			}
			//Act
			double** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_set_cero_int)
		{
			//Assert
			Matrix _matrix;
			int** _matrix_expected;
			_matrix_expected = (int**)malloc(3 * sizeof(int*));
			for (int i = 0; i < 3; i++) {
				*(_matrix_expected + i) = (int*)malloc(3 * sizeof(int));
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 0;
				}

			}
			//Act
			int** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			_matrix._set_cero(3, _matrix_result);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_set_cero_float)
		{
			//Assert
			Matrix _matrix;
			float** _matrix_expected;
			_matrix_expected = (float**)malloc(3 * sizeof(float*));
			for (int i = 0; i < 3; i++) {
				*(_matrix_expected + i) = (float*)malloc(3 * sizeof(float));
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 0;
				}

			}
			//Act
			float** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			_matrix._set_cero(3, _matrix_result);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_set_cero_double)
		{
			//Assert
			Matrix _matrix;
			double** _matrix_expected;
			_matrix_expected = (double**)malloc(3 * sizeof(double*));
			for (int i = 0; i < 3; i++) {
				*(_matrix_expected + i) = (double*)malloc(3 * sizeof(double));
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 0;
				}

			}
			//Act
			double** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			_matrix._set_cero(3, _matrix_result);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_change_matrix_int)
		{
			//Assert
			Matrix _matrix;
			int** _matrix_expected;
			_matrix_expected = _matrix._create_matrix(3,_matrix_expected);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 1;
				}
			}
			//Act
			int** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			_matrix._change_matrix(_matrix_expected,_matrix_result, 3);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_change_matrix_float)
		{
			//Assert
			Matrix _matrix;
			float** _matrix_expected;
			_matrix_expected = _matrix._create_matrix(3, _matrix_expected);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 1.5;
				}
			}
			//Act
			float** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			_matrix._change_matrix(_matrix_expected, _matrix_result, 3);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_change_matrix_double)
		{
			//Assert
			Matrix _matrix;
			double** _matrix_expected;
			_matrix_expected = _matrix._create_matrix(3, _matrix_expected);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 1.5;
				}
			}
			//Act
			double** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			_matrix._change_matrix(_matrix_expected, _matrix_result, 3);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_pow_int)
		{
			//Assert
			Matrix _matrix;
			Matrix_operation mo;
			int** _matrix_expected;
			_matrix_expected = _matrix._create_matrix(3, _matrix_expected);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 3;
				}
			}
			//Act
			int** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 1;
				}
			}
			mo._pow(_matrix_result,3,2);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_pow_float)
		{
			//Assert
			Matrix _matrix;
			Matrix_operation mo;
			float** _matrix_expected;
			_matrix_expected = _matrix._create_matrix(3, _matrix_expected);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 6.75;
				}
			}
			//Act
			float** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 1.5;
				}
			}
			mo._pow(_matrix_result, 3, 2);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

		TEST_METHOD(test_pow_double)
		{
			//Assert
			Matrix _matrix;
			Matrix_operation mo;
			double** _matrix_expected;
			_matrix_expected = _matrix._create_matrix(3, _matrix_expected);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 6.75;
				}
			}
			//Act
			double** _matrix_result;
			_matrix_result = _matrix._create_matrix(3, _matrix_result);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					*(*(_matrix_expected + i) + j) = 1.5;
				}
			}
			mo._pow(_matrix_result, 3, 2);
			//Result
			Assert::AreEqual(_matrix_expected, _matrix_result);
		}

	};
}
