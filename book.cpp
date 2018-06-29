#include "book.h"
  
Book::Book() {
}

Book::~Book() {
}

Book::Book(string title) {
  this->title = title;
}

string Book::getTitle() {
  return this->title;
}

void Book::setTitle(string title) {
  this->title = title;
}
