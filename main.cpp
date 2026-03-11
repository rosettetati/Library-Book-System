#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    string title;
    int copies;

public:
    // Default constructor
    LibraryBook() {
        title = "A Walk In The Night";
        copies = 1;
    }

    // Constructor with parameters
    LibraryBook(string t, int c) {
        title = t;
        copies = c;
    }

    // Copy constructor
    LibraryBook(const LibraryBook &other) {
        title = other.title;
        copies = other.copies;
    }

    // Method with no parameters: display book info
    void displayInfo() {
        cout << "Title: " << title << ", Copies: " << copies << endl;
    }

    // Method with parameters: update book info
    void updateBook(string t, int c) {
        title = t;
        copies = c;
        cout << "Book information updated successfully!" << endl;
    }

    // Method that returns a value: check availability
    bool isAvailable() {
        return copies > 0;
    }

    // Method with no parameters: borrow a book
    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "You have borrowed \"" << title << "\" successfully!" << endl;
        } else {
            cout << "Sorry, \"" << title << "\" is not available right now." << endl;
        }
    }

    // Method with no parameters: return a book
    void returnBook() {
        copies++;
        cout << "You have returned \"" << title << "\" successfully!" << endl;
    }

    // Method to display parameters (for demonstration)
    void displayParameters() {
        cout << "[Parameters] Title: " << title << ", Copies: " << copies << endl;
    }
};

int main() {
    // Create some books
    LibraryBook book1; // default constructor
    LibraryBook book2("VBC Study Guide", 3); // parameterized
    LibraryBook book3(book2); // copy constructor

    cout << "=== Initial Book Info ===" << endl;
    book1.displayInfo();
    book2.displayInfo();
    book3.displayInfo();

    // Interactive loop
    int choice;
    do {
        cout << "\n=== Library Menu ===" << endl;
        cout << "1. Display all books\n";
        cout << "2. Borrow a book\n";
        cout << "3. Return a book\n";
        cout << "4. Update a book\n";
        cout << "5. Display book parameters\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int bookNum;
        string newTitle;
        int newCopies;

        switch (choice) {
            case 1:
                cout << "\n--- Book List ---" << endl;
                cout << "Book 1: "; book1.displayInfo();
                cout << "Book 2: "; book2.displayInfo();
                cout << "Book 3: "; book3.displayInfo();
                break;

            case 2:
                cout << "Enter book number to borrow (1-3): ";
                cin >> bookNum;
                if (bookNum == 1) book1.borrowBook();
                else if (bookNum == 2) book2.borrowBook();
                else if (bookNum == 3) book3.borrowBook();
                else cout << "Invalid book number!" << endl;
                break;

            case 3:
                cout << "Enter book number to return (1-3): ";
                cin >> bookNum;
                if (bookNum == 1) book1.returnBook();
                else if (bookNum == 2) book2.returnBook();
                else if (bookNum == 3) book3.returnBook();
                else cout << "Invalid book number!" << endl;
                break;

            case 4:
                cout << "Enter book number to update (1-3): ";
                cin >> bookNum;
                cin.ignore(); // clear buffer
                cout << "Enter new title: ";
                getline(cin, newTitle);
                cout << "Enter new number of copies: ";
                cin >> newCopies;

                if (bookNum == 1) book1.updateBook(newTitle, newCopies);
                else if (bookNum == 2) book2.updateBook(newTitle, newCopies);
                else if (bookNum == 3) book3.updateBook(newTitle, newCopies);
                else cout << "Invalid book number!" << endl;
                break;

            case 5:
                cout << "\n--- Book Parameters ---" << endl;
                cout << "Book 1: "; book1.displayParameters();
                cout << "Book 2: "; book2.displayParameters();
                cout << "Book 3: "; book3.displayParameters();
                break;

            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
