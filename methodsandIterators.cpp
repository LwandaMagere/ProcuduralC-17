// methods and iterators
#include <iostream>
#include <string>
#include <vector>

struct  Review
{
    std::string title;
    int rating;
};
bool FillReview(Review &);
void ShowReview(const Review &);

int main()
{
    using std::cout;
    using std::vector;

    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if (num > 0)
    {
        cout << "Thank you. You enterd the following:\n" 
             << "Rating\tBook\n";
        for (int i = 0; i < num; i++)
            ShowReview(books[i]);
        cout << "Reprising:\n"
             << "Rating\tBook\n";
        vector<Review>::iterator pr;
        for(pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
        vector<Review> oldlist(books); // copy constructor used
        if (num > 3)
        {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasure:" << std::endl;
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);

            books.insert(books.begin(), oldlist.begin(), oldlist.begin() + 2);
            cout << "After insertion " << std::endl;
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }
        books.swap(oldlist);
        cout << "Swapping oldlist with books: " << std::endl;
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
       
    }
     else 
            cout << "Nothing entered, nothing gained." << std::endl;
    return 0;
}

bool FillReview(Review & rr)
{
    using namespace std;
    cout << "Enter book title (quit to quit): ";
    getline(cin, rr.title);
    if (rr.title == "quit")
        return false;
    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (cin)
        return false;
    while (cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}

