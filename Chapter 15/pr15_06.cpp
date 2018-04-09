// This program demonstrates abstract base
// classes and pure virtual functions.
//
// Author: Rich Snyder adapted from Gaddis 9e

#include <iostream>
#include <vector>
using namespace std; 

// Base class with pure virtual function
class Shape
{
	private:
		int posX, posY;  // could make these protected, then derived classes can access directly
	public:
		virtual void draw() const = 0;	// must be implemented in derived classes
		void setPosition(int pX, int pY)
		{
			posX = pX;
			posY = pY;
		}
		int getPosX() const { return posX; }
		int getPosY() const { return posY; }
};

class Rectangle : public Shape
{
	public:
		virtual void draw() const
		{
			cout << "Drawing rectangle at " << this->getPosX() << "  " << this->getPosY() << endl << endl;
		}
};

class Hexagon : public Shape
{
	public:
		virtual void draw() const
		{
			cout << "Drawing hexagon at " << this->getPosX() << "  " << this->getPosY() << endl << endl;
		}
};

class Oval : public Shape
{
	public:
		virtual void draw() const
		{
			cout << "Drawing oval with center point of " << this->getPosX() << "  " << this->getPosY() << endl << endl;
		}
};
int main()
{
    // Create vector of pointers to Shapes of various types    
	vector<Shape *> shapes(3);
   
	shapes[0] = new Hexagon;
	shapes[1] = new Rectangle;
	shapes[2] = new Oval;
  
    // Set positions of all the shapes
    int posX = 5, posY = 15;
    for (unsigned int k = 0; k < shapes.size(); k++)
    {
        shapes[k]->setPosition(posX, posY);
        posX += 10;
        posY += 10;
    };

    // Draw all the shapes at their positions
    for (unsigned int j = 0; j < shapes.size(); j++)
        shapes[j]->draw();

    return 0;
}