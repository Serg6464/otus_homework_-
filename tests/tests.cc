/* --- Includes --- */
#include <gtest/gtest.h>
#include <iostream>
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
// 3. тест проверяющий что для уравнения x^2-1=0 корней нет
TEST(DDD, CheckNoRoots)
{
  //arrange
  double a = 1.0, b = 0.0, c=-1.0;
  vector <double> etalonVal = {};
  //act
  auto retVal = TestClass::solve(a,b);
  //assert
  EXPECT_EQ(retVal,etalonVal);  
}