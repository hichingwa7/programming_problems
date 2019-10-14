const int size = 20;
const int ssize = 15;
class stringArray {
private:
    char x[size][ssize];
public:
    stringArray() {                   //constructor
        void add (char s[]);        //adds a new string
        int del(char s[]);          //deletes a string
        void insert(char p[], char s[]);  //inserts a string
        void disp();                //prints a string
    }
    ~ stringArray();
};
