#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(float x,float y);
        float getX();
        float getY();


    protected:

    private:
        float x;
        float y;
};

#endif // POINT_H
