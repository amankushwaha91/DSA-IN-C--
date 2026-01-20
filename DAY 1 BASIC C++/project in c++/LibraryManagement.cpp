#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;


class Book {
public:
    string title, author, ISBN;
    bool available;
    string borrowerName;
    time_t dueDate; 

    Book(string t, string a, string i) {
        title = t;
        author = a;
        ISBN = i;
        available = true;
        borrowerName = "";
        dueDate = 0;
    }
};


class Library {
private:
    vector<Book> books;

public:
    // Add a book to the library
    void addBook(string title, string author, string ISBN) {
        books.push_back(Book(title, author, ISBN));
        cout << "✅ Book added successfully!\n";
    }

    
    void searchBook(string keyword) {
        bool found = false;
        for (auto &b : books) {
            if (b.title == keyword || b.author == keyword || b.ISBN == keyword) {
                cout << "\n📚 Book Found:\n";
                cout << "Title: " << b.title << "\nAuthor: " << b.author
                     << "\nISBN: " << b.ISBN
                     << "\nStatus: " << (b.available ? "Available" : "Checked Out") << "\n";
                found = true;
            }
        }
        if (!found) cout << "❌ Book not found!\n";
    }

    
    void checkoutBook(string ISBN, string borrower) {
        for (auto &b : books) {
            if (b.ISBN == ISBN) {
                if (b.available) {
                    b.available = false;
                    b.borrowerName = borrower;

                    // Set due date = 7 days from now
                    time_t now = time(0);
                    b.dueDate = now + 7 * 24 * 60 * 60;

                    cout << "✅ Book checked out successfully to " << borrower << "!\n";
                    return;
                } else {
                    cout << "❌ Book is already checked out!\n";
                    return;
                }
            }
        }
        cout << "❌ Book not found!\n";
    }

    
    void returnBook(string ISBN) {
        for (auto &b : books) {
            if (b.ISBN == ISBN) {
                if (!b.available) {
                    b.available = true;

                    
                    time_t now = time(0);
                    if (now > b.dueDate) {
                        double daysLate = difftime(now, b.dueDate) / (60 * 60 * 24);
                        double fine = daysLate * 10; // ₹10 per day
                        cout << "⚠️ Book returned late by " << daysLate << " days.\n";
                        cout << "Fine: ₹" << fine << "\n";
                    } else {
                        cout << "✅ Book returned on time. No fine.\n";
                    }

                    b.borrowerName = "";
                    b.dueDate = 0;
                    return;
                } else {
                    cout << "❌ This book was not checked out!\n";
                    return;
                }
            }
        }
        cout << "❌ Book not found!\n";
    }

    
    void displayBooks() {
        cout << "\n📖 Library Books:\n";
        for (auto &b : books) {
            cout << "Title: " << b.title << " | Author: " << b.author
                 << " | ISBN: " << b.ISBN
                 << " | Status: " << (b.available ? "Available" : "Checked Out by " + b.borrowerName) << "\n";
        }
    }
};


int main() {
    Library lib;
    int choice;
    string title, author, ISBN, borrower;

    do {
        cout << "\n=============================\n";
        cout << "   LIBRARY MANAGEMENT SYSTEM \n";
        cout << "=============================\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Display All Books\n";
        cout << "4. Checkout Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // clear buffer

        switch (choice) {
            case 1:
                cout << "Enter Title: "; getline(cin, title);
                cout << "Enter Author: "; getline(cin, author);
                cout << "Enter ISBN: "; getline(cin, ISBN);
                lib.addBook(title, author, ISBN);
                break;

            case 2:
                cout << "Enter Title/Author/ISBN to search: "; getline(cin, title);
                lib.searchBook(title);
                break;

            case 3:
                lib.displayBooks();
                break;

            case 4:
                cout << "Enter ISBN to checkout: "; getline(cin, ISBN);
                cout << "Enter Borrower Name: "; getline(cin, borrower);
                lib.checkoutBook(ISBN, borrower);
                break;

            case 5:
                cout << "Enter ISBN to return: "; getline(cin, ISBN);
                lib.returnBook(ISBN);
                break;

            case 6:
                cout << "👋 Exiting Library System. Goodbye!\n";
                break;

            default:
                cout << "❌ Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
