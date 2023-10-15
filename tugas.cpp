#include <iostream>
#include
#include <string>

using namespace std;

// Define a structure to represent a book
struct Book {
    string judul;
    string penulis;
    string jenis;
    int tahun;


int main() {
    // Create a vector to store books
    vector<Book> bookList;

    // Add some books to the list
    bookList.push_back({"solo leveling", "chugong", "manhwa" 2020});
    bookList.push_back({"martial peak", "pikapi", "manhua" 2018});
    bookList.push_back({"wind breaker", "jo soung seok", 2019});

    // Display the list of books
    cout << "List of Books:" <<endl;
    for (const Book &book : bookList) {
        cout << "Title: " << book.title. <<endl;
        cout << "Author: " << book.author <<endl;
        cout << "Year: " << book.year <<endl;
        cout << "-------------------------" <<endl;
    }

    return 0;
}
