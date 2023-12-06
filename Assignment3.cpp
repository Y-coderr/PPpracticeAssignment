#include <iostream>
#include <vector>

using namespace std;

class Book {
public:
  string author;
  string title;
  float price;
  string publisher;
  int stock;

  Book(string author, string title, float price, string publisher, int stock) {
    this->author = author;
    this->title = title;
    this->price = price;
    this->publisher = publisher;
    this->stock = stock;
  }

  void display() {
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Stock: " << stock << endl;
  }
};

class BookShop {
public:
  vector<Book> inventory;

  void addBook(Book book) {
    inventory.push_back(book);
  }

  void displayInventory() {
    for (auto book : inventory) {
      book.display();
    }
  }

  Book* searchBook(string title, string author) {
    for (auto book : inventory) {
      if (book.title == title && book.author == author) {
        return &book;
      }
    }
    return nullptr;
  }

  void sellBook(Book* book, int quantity) {
    if (book == nullptr) {
      cout << "Book not found." << endl;
      return;
    }

    if (book->stock < quantity) {
      cout << "Required copies not in stock." << endl;
      return;
    }

    book->stock -= quantity;
    cout << "Total cost: " << book->price * quantity << endl;
  }
};

int main() {
  BookShop bookShop;

  // Add books to the inventory
  bookShop.addBook(Book("J.K. Rowling", "Harry Potter and the Sorcerer's Stone", 29.99, "Scholastic", 10));
  bookShop.addBook(Book("Stephen King", "The Shining", 24.99, "Doubleday", 5));
  bookShop.addBook(Book("J.R.R. Tolkien", "The Lord of the Rings: The Fellowship of the Ring", 27.99, "Allen & Unwin", 20));

  // Display the inventory
  bookShop.displayInventory();

  // Search for a book
  Book* book = bookShop.searchBook("The Lord of the Rings: The Fellowship of the Ring", "J.R.R. Tolkien");

  // Sell the book
  bookShop.sellBook(book, 2);

  return 0;
}
