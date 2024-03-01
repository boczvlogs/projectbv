#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class representing a Book
class Book {
public:
    string title;
    string author;
    int year;

    // Constructor
    Book(string t, string a, int y) : title(t), author(a), year(y) {}

    // Display book information
    void displayInfo() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << year << endl;
    }
};

// Class representing a Library
class Library {
private:
    vector<Book> books;

public: 
    // Add a book to the library 
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully!\n";
    }

    // Display information for all books in the library
    void displayAllBooks() {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }

        cout << "Library Books:\n";
        for (const auto& book : books) {
            book.displayInfo();
            cout << "---------------\n";
        }
    }

    // Search for a book by title Front
    void searchByTitle(const string& title) {
        bool found = false;
        for (const auto& book : books) {
            if (book.title == title) {
                book.displayInfo();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Book not found.\n";
        }
    }
};

int main() {
    Library library;

    // Example books
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    // Adding books to the library
    library.addBook(book1);
    library.addBook(book2);

    // Displaying all books in the library
    library.displayAllBooks();

    // Searching for a book by title
    cout << "Enter the title of the book to search: ";
    string searchTitle;
    getline(cin, searchTitle);
    library.searchByTitle(searchTitle);

    return 0;
}
//Agoo inC & msft

