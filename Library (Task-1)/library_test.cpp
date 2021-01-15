#include "book.h"
#include"library.h"
#include <gtest/gtest.h>
namespace {

class LibraryTest : public ::testing::Test {

  protected:
    void SetUp() { //override {
        libr.addBook( 1001,"Python","Steves","Havards",100,200 );
        libr.addBook( 1002,"C#","John","Paul",300,400 );
        libr.addBook( 1003,"C++","Harry","Eric",500,600);
    }
    void TearDown() {
    }
    Library libr;
};
TEST_F(LibraryTest,CountAccounts) {
  EXPECT_EQ(3,libr.countAll());
}

TEST_F(LibraryTest,AddBook) {
  libr.addBook( 1004,"Java","vishali","Mc Groove",700,100 );
  EXPECT_EQ(4,libr.countAll());
  Book *ptr=libr.findBookById( 1004 );
  EXPECT_NE(nullptr, ptr);
  EXPECT_EQ(1004, ptr->getId());
  EXPECT_EQ(700, ptr->getPrice());
}
TEST_F(LibraryTest,RemoveBook) {
  libr.removeBook( 1002 );
  EXPECT_EQ(2,libr.countAll());
  Book *ptr=libr.findBookById( 1002);
  EXPECT_EQ(nullptr, ptr);
}
}


