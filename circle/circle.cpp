#include<ruby.h>
#include"Circle.hpp"

VALUE method_test(VALUE self, VALUE y) {
  double x= NUM2DBL(y);
  Circle *cir= new Circle(x);
  return DBL2NUM(cir->getArea());
}

extern "C" void Init_Test() {
  VALUE lemon = rb_define_module("Test");
  rb_define_method(lemon, "test", (VALUE(*)(ANYARGS))method_test,1);
}
