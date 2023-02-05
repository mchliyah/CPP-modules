#include <iostream>

class APP {
    private:
        int a;
        int b;
    public:
        APP() : a(42){};
        void print() {std::cout << a << b << std::endl; }
        void get_a() { return a}
};

int main()
{
    APP app;
    int *c = (int *)&app;
    // *((int *)&app)[1] = 13;
    *c = 1337;
    *(c + 1) = 12;
    app.print();
}
