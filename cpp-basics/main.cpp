#include <iostream>
#include <cmath>

using namespace std;

// Function declaration
void sayHi(string name, int age);
double cube(double num);
int getMax(int num1, int num2);
string getDayOfWeek(int dayNum);
int power(int baseNum, int powNum);

// Classes
class Book {
    private:
        string rating;

    public:
        string title;
        string author;
        int pages;

        // Constructor
        Book() {
            title = "no title";
            author = "no author";
            pages = 0;
            rating = "A";
        }

        Book(string aTitle, string aAuthor, int aPages, string aRating) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            rating = aRating;
        }

        // Object methods
        bool isLong() {
            if (pages >= 500) {
                return true;
            }
            return false;
        }

        // Getters and setters
        string getRating() {
            return rating;
        }

        void setRating(string aRating) {
            if (aRating == "A" || aRating == "B" || aRating == "C") {
                rating = aRating;
            } else {
                rating = "Invalid rating";
            }
        }
};

// Inheritance
class Fiction : public Book {
    public:
        string type;
        string publishedTime;
        Fiction(string aTitle, string aAuthor, int aPages, string aRating, string aType, string apublishedTime) : Book(aTitle, aAuthor, aPages, aRating) {
            type = aType;
            publishedTime = apublishedTime;
        }

        bool isNew() {
            if (publishedTime == "new") {
                return true;
            }
            return false;
        }
};

int main()
{
    // Types
    char grade = 'A';
    double gpa = 3.5;
    string phrase = "Giraffe Academy";
    phrase[0] = 'B';

    // Print
    cout << phrase << endl;

    // Working with strings
    cout << phrase.length() << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrase.substr(8, 3) << endl;

    // Working with numbers
    cout << 10 % 3 << endl;
    int wnum = 5;
    double dnum = 5.5;
    wnum -= 2;
    cout << dnum / wnum << endl;

    // Math functions
    cout << pow(2, 3) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.3) << endl;
    cout << ceil(4.3) << endl;
    cout << floor(4.3) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;

    // User input
    int age;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    getline(cin, name);
    cout << "Hello " << name << endl;

    // Basic Calculator
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 + num2 << endl;

    // Mad Libs Game
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    // Arrays
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};
    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    // Functions
    sayHi("Mike", 35);
    cout << cube(5.0) << endl;

    // If statements
    bool isMale = true;
    bool isTall = true;

    if (isMale && isTall) {
        cout << "You are a tall male" << endl;
    } else if (isMale && !isTall) {
        cout << "You are a male but not tall" << endl;
    } else if (!isMale && isTall) {
        cout << "You are not male but are tall" << endl;
    } else {
        cout << "You are not male" << endl;
    }

    // Comparison operators
    // > | < | >= | <= | == | !=
//    int num1 = 3;
//    int num2 = 2;
    cout << (getMax(num1, num2)) << endl;

    // Better calculator
//    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op;

    if (op == '+') {
        cout << num1 + num2 << endl;
    } else if (op == '-') {
        cout << num1 - num2 << endl;
    } else if (op == '/') {
        cout << num1 / num2 << endl;
    } else if (op == '*') {
        cout << num1 * num2 << endl;
    } else if (op == '%') {
        cout << (int)num1 % (int)num2 << endl;
    } else {
        cout << "Invalid operator" << endl;
    }

    // Switch statements
    int day = 4;
    cout << getDayOfWeek(day) << endl;

    // While loops
    int index = 1;
    while (index <= 5) {
        cout << index << endl;
        index++;
    }

    // Do while loops
//    int index = 6;
    do {
        cout << index << endl;
        index++;
    } while (index <= 5);

    // Guessing game
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You lose!" << endl;
    } else {
        cout << "You win!" << endl;
    }

    // For loops
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    int nums[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << endl;
    }

    // Exponent function
    cout << pow(2, 3) << endl;

    // 2D Arrays and Nested loops
    int numberGrid[3][2] = {
            {1, 2},
            {3, 4},
            {5, 6}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    // Pointers
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << pAge << endl;
    cout << *pAge << endl;

    cout << pGpa << endl;
    cout << *pGpa << endl;

    cout << pName << endl;
    cout << *pName << endl;

    // Objects
    Book book1 = Book("Harry Potter", "JK Rowling", 600, "A");

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    cout << book1.isLong() << endl;
    cout << book1.getRating() << endl;

    Book book2;
    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    Fiction book3 = Fiction("The Hobbit", "Tolkien", 300, "A", "Fantasy", "new");
    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;
    cout << book3.isLong() << endl;
    cout << book3.getRating() << endl;
    cout << book3.type << endl;
    cout << book3.isNew() << endl;

    return 0;
}

// Function definition
void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}

double cube(double num) {
    return num * num * num;
}

int getMax(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

string getDayOfWeek(int dayNum) {
    string dayName;

    switch (dayNum) {
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default:
            dayName = "Invalid day";
    }

    return dayName;
}

int power(int baseNum, int powNum) {
    int result = 1;
    for (int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}