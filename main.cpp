#include <iostream>
#include <string>
#include "book.h"

using namespace std;

int main()
{
  string name = "Bob";
  cout << "Hello, " << name << "!" << endl;

  Book* book = new Book("Design Patterns");
  cout << "My book is called " << book->getTitle() << endl;

  delete book;

  return 0;
}
