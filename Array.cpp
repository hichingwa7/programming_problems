const int size = 30;
class Array {
private:
    double x[size];
public:
    Array(); //constructor
    void add(double y); //add method
    void del(); //delete method
    void insert(double p, double y); //insert method
    int getindex(double p); //get method
    bool isFull(); //is array full
    bool isEmpty(); //is array empty
    disp(); //print method
    ~Array(); //destructor
};
