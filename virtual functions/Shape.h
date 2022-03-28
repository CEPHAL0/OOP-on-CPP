
class shape
{
    public:
    virtual void printArea() = 0;
};

class circle : public shape
{
    private:
    float radius;

    public : 
    circle() {}
    circle(float rad) : radius(rad) {}

    void printArea()
    {
        cout << "The Area is of circle: " << 3.14 * radius * radius;

}

};

class square : public shape
{
private:
    float sides;

public:
    square() {}
    square(float side) : sides(side) {}

    void printArea()
    {
        cout << "The area of square: " << sides * sides << endl;
    }
};
