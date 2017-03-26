#include <ruby.h>


static VALUE
hello_hello(VALUE self) {
  VALUE str = rb_str_new2("hello!");
  rb_io_puts(1, str, rb_stdout);
  return self;
}

extern "C" void
Init_hello(void) {
  VALUE mHelloGem = rb_define_module("HelloGem");
  VALUE cHello = rb_define_class_under(mHelloGem, "Hello", NULL);
  rb_define_method(cHello, "hello", RUBY_METHOD_FUNC(hello_hello), 0);
}
