/* --- Includes --- */
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

/* --- User includes --- */
#include "../inc/testClass.hpp"

/* --- Main function --- */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<TestClass::getLogo() << std::endl;
  std::cout<<"Start of tests ...\n";
  return RUN_ALL_TESTS();
}

/* 
--------------------------------------------------------------
Sample class tests
--------------------------------------------------------------
*/
// 3. тест проверяющий что для уравнения x^2+1=0 корней нет
TEST(DDD, CheckNoRoots)
{
  //arrange
  double a = 1.0, b = 0.0, c=1.0;
  std::vector <double> etalonVal = {};
  //act
  auto retVal = TestClass::solve(a,b,c);
  //assert
  EXPECT_EQ(retVal,etalonVal);  
}

// 5. тест проверяющий что для уравнения x^2+1=0 два корня 1,-1
TEST(DDD, Check2Roots)
{
  //arrange
  double a = 1.0, b = 0.0, c=-1.0;
  std::vector <double> etalonVal = {1.0, -1.0};
  //act
  auto retVal = TestClass::solve(a,b,c);
  //assert
  EXPECT_EQ( retVal.size(), etalonVal.size() );
  for(int i=0; i<retVal.size(); i++ )
  { 
    EXPECT_DOUBLE_EQ(retVal[i],etalonVal[i]);
  }  
}

// 7. тест проверяющий что для уравнения x^2+2x+1=0 один корень -1
TEST(DDD, Check1Root)
{
  //arrange
  double a = 1.0, b = 2.0, c=1.0;
  std::vector <double> etalonVal = {-1.0};
  //act
  auto retVal = TestClass::solve(a,b,c);
  //assert
  EXPECT_EQ( retVal.size(), etalonVal.size() );
  for(int i=0; i<retVal.size(); i++ )
  { 
    EXPECT_DOUBLE_EQ(retVal[i],etalonVal[i]);
  }  
}

// 9. тест проверяющий что при a=0 exception
TEST(DDD, CheckException_a_eq_0)
{
  //arrange
  double a = 0.0, b = 0.0, c=1.0;
  std::vector <double> etalonVal = {};
  //act, ASSERT
  EXPECT_ANY_THROW(TestClass::solve(a,b,c));
}