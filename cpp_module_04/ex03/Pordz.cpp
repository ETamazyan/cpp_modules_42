#include <iostream>
#include <cmath>

// 1. Pure Abstract Class (Interface)
class IShape
{
public:
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
	virtual void draw() const = 0;
	virtual ~IShape() {}
};

// 2. Abstract Base Class with Partial Implementation
class Shape : public IShape
{
protected:
	std::string name;

public:
	Shape(const std::string &name) : name(name) {}

	void draw()
	{
		std::cout << "Drawing a " << name << "\n";
	}
};

// 3. Concrete Class: Circle
class Circle : public Shape
{
private:
	double radius;

public:
	Circle(double r) : Shape("Circle"), radius(r) {}

	double area()
	{
		return M_PI * radius * radius;
	}

	double perimeter()
	{
		return 2 * M_PI * radius;
	}
};

// 4. Concrete Class: Rectangle
class Rectangle : public Shape
{
private:
	double width, height;

public:
	Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

	double area()
	{
		return width * height;
	}

	double perimeter()
	{
		return 2 * (width + height);
	}
};

// 5. Polymorphic Usage
int main()
{
	IShape *shapes[2];

	shapes[0] = new Circle(5.0);
	shapes[1] = new Rectangle(4.0, 6.0);

	for (int i = 0; i < 2; ++i)
	{
		shapes[i]->draw();
		std::cout << "Area: " << shapes[i]->area() << "\n";
		std::cout << "Perimeter: " << shapes[i]->perimeter() << "\n\n";
	}

	// Clean up
	for (int i = 0; i < 2; ++i)
	{
		delete shapes[i];
	}

	return 0;
}
