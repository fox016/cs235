#ifndef BOOK_H_
#define BOOK_H_

#include <string>

using namespace std;

class Book
{
public:

  Book();

  ~Book();

  Book(string title);

  string getTitle();

  void setTitle(string title);

private:

  string title;
};

#endif /* BOOK_H_ */
