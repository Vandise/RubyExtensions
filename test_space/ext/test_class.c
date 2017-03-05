#include "test_class.h"

VALUE TestSpace;
void Init_test_space_string();

void Init_test_space() {
  TestSpace = rb_define_module("TestSpace");
  Init_test_space_string();
}

/*
  module TestSpace
    class String
    end
  end
*/
void Init_test_space_string() {
  VALUE cTestSpaceString = rb_define_class_under(TestSpace, "String", rb_cObject);
}
