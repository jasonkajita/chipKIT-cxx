
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_OutputStream__
#define __java_io_OutputStream__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::io::OutputStream : public ::java::lang::Object
{

public:
  OutputStream();
  virtual void write(jint) = 0;
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void flush();
  virtual void close();
  static ::java::lang::Class class$;
};

#endif // __java_io_OutputStream__
