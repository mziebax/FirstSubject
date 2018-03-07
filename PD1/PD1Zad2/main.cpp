#include <iostream>
// 2. Od struktury do klasy zad 1
class Point{
private:
    float x;
    float y;
public:
float getX()
{
 return this->x;
}
float getY()
{
    return this->y;
}
void setX(float x)
{
    this->x=x;
}
void setY(float y)
{
    this->y=y;
}
// zad2a
void move(float xp,float yp)
{
    this.setX(this.getX()+xp);
    this.setY(this.getY()+yp);
}
// zad 2b
void move(Point p)
{
    this.setX(this.getX()+p.getX());
    this.setY(this.getY()+p.getY());
}
};
int main()
{

}
