class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int len)
    {
        length = len;
    }

    int getLength()
    {
        return length;
    }

    void setBreadth(int brd)
    {
        breadth = brd;
    }

    int getBreadth()
    {
        return breadth;
    }

    // behavior of the rectangle
    long calcArea();
};

long Rectangle::calcArea()
{
    return length * breadth;
}
