#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using std::shared_ptr;
using std::string;

struct Review
{
    string title;
    int rating;
    double price;
};

bool operator<(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool worseThan(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool cheaperThan(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool FillReview(shared_ptr<Review> &rr);
void ShowReview(shared_ptr<Review> &rr);
void ShowChoice();

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::vector;

    vector<shared_ptr<Review>> books;
    shared_ptr<Review> temp(new Review);
    int n;

    while (FillReview(temp))
    {
        books.push_back(temp);
        temp = shared_ptr<Review>(new Review);
    }
    ShowChoice();
    cin >> n;
    while (n < 7 && n > 0)
    {
        switch (n)
        {
        case 1:
            // 原始顺序
            cout << "title\trating\tprice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 2:
            // 字母表顺序
            sort(books.begin(), books.end());
            cout << "title\trating\tprice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 3:
            // 评级升序
            sort(books.begin(), books.end(), worseThan);
            cout << "title\trating\tprice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 4:
            // 评级降序
            sort(books.begin(), books.end(), worseThan);
            reverse(books.begin(), books.end());
            cout << "title\trating\tprice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 5:
            // 价格升序
            sort(books.begin(), books.end(), cheaperThan);
            cout << "title\trating\tprice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 6:
            // 价格降序
            sort(books.begin(), books.end(), cheaperThan);
            reverse(books.begin(), books.end());
            cout << "title\trating\tprice\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 7:
            break;
        default:
            cout << "wrong number.";
            continue;
        }
        ShowChoice();
        cin >> n;
    }
    cout << "Bye.\n";

    system("pause");
    return 0;
}

bool operator<(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else if (r1->title == r2->title && r1->rating == r2->rating && r1->price < r2->price)
        return true;
    else
        return false;
}

bool worseThan(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool cheaperThan(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}

bool FillReview(shared_ptr<Review> &rr)
{
    using std::cin;
    using std::cout;

    cout << "Enter book title (quit to quit): ";
    std::getline(cin, rr->title);
    if (rr->title == "quit")
    {
        return false;
    }
    cout << "Enter book rating: ";
    cin >> rr->rating;
    if (!cin)
        return false;
    while (cin.get() != '\n')
        continue;
    cout << "Enter book price: ";
    cin >> rr->price;
    if (!cin)
        return false;
    while (cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(shared_ptr<Review> &rr)
{
    using std::cout;
    using std::endl;

    cout << rr->title << "\t" << rr->rating << "\t" << rr->price << endl;
}

void ShowChoice()
{
    using std::cout;

    cout << "Please enter 1~7\n"
         << "1) by original order \t 2) by alphabet order  \n"
         << "3) by rating up      \t 4) by rating down     \n"
         << "5) by pricing up     \t 6) by pricing down    \n"
         << "7) quit  \n";
}
