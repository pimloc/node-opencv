#ifndef __NODE_UTILS_H
#define __NODE_UTILS_H

#include "OpenCV.h"

/**
 * Implementation of imgproc.hpp functions
 */
class ExifUtils : public Nan::ObjectWrap {
public:
  static void Init(Handle<Object> target);
  static NAN_METHOD(CopyExif);
  static NAN_METHOD(ReadRotation);
};

#endif