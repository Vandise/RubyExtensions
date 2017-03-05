#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
  public:
    Circle(float radius):_radius(radius) {}
    float getArea() { return 3.14159 * _radius * _radius; }

  private:
    float _radius;

};

#endif
