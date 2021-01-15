#include "book.h"
#include <list>
#include <algorithm>


class Library {
  std::list<Book> books;

public:
void addBook(int id, std::string title, std::string author,std::string publisher, double price, int pages);
void displayAll() ;
Book* findBookById(int keyId);
void removeBook(int id);
int findAllBooksByAuthor(std::string author, std::list<Book>& results);
double findAveragePriceOfBook() ;
Book& findBookWithMaxPages() ;
Book* findBookWithMinPriceByPublisher(std::string publisher) ;
double findAveragePriceOfBook(std::string publisher);
int countAll(){return books.size();}
};


