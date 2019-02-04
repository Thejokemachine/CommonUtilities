#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CommonUtilities/Vector2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Vector2_Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Length)
		{
			CVector2f vec = CVector2f(5.f, 5.f);

			Assert::IsTrue(vec.Length() == sqrt(50.f));
		}
		TEST_METHOD(Length2)
		{
			CVector2f vec = CVector2f(5.f, 5.f);

			Assert::IsTrue(vec.Length2() == 50.f);
		}
		TEST_METHOD(Normalize)
		{
			CVector2f vec = CVector2f(1.f, 1.f);

			vec.Normalize();

			float length = vec.Length();
			Assert::IsTrue(length > (1.f - FLT_EPSILON) && length < (1.f + FLT_EPSILON));
		}
		TEST_METHOD(GetNormalized)
		{
			CVector2f vec = CVector2f(1.f, 1.f);

			float length = vec.GetNormalized().Length();
			Assert::IsTrue(length > (1.f - FLT_EPSILON) && length < (1.f + FLT_EPSILON));
		}
		TEST_METHOD(Equals)
		{
			CVector2f vec = CVector2f(5.f, 5.f);
			CVector2f vec2 = CVector2f(10.f, 10.f);
			vec2 = vec;

			Assert::IsTrue(vec == vec2);
		}


	};
}