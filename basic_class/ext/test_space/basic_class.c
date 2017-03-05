#include "basic_class.h"

VALUE TestSpace;

void init_basic_class();

void Init_test_space() {
  TestSpace = rb_define_module("TestSpace");
  init_basic_class();
}

static VALUE basic_class_init(VALUE self, VALUE name) {
  rb_iv_set(self, "@name", name);
  return self;
}

void init_basic_class() {
  VALUE class = rb_define_class_under(TestSpace, "BasicClass", rb_cObject);
  rb_define_method(class, "initialize", basic_class_init, 1);

  // class, attribute, read, write
  rb_define_attr(class, "name", 1, 0);
}