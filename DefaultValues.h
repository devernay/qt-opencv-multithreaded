/************************************************************************/
/* qt-opencv-multithreaded:                                             */
/* A multithreaded OpenCV application using the Qt framework.           */
/*                                                                      */
/* DefaultValues.h                                                      */
/*                                                                      */
/* Nick D'Ademo <nickdademo@gmail.com>                                  */
/*                                                                      */
/* Copyright (c) 2011 Nick D'Ademo                                      */
/*                                                                      */
/* Permission is hereby granted, free of charge, to any person          */
/* obtaining a copy of this software and associated documentation       */
/* files (the "Software"), to deal in the Software without restriction, */
/* including without limitation the rights to use, copy, modify, merge, */
/* publish, distribute, sublicense, and/or sell copies of the Software, */
/* and to permit persons to whom the Software is furnished to do so,    */
/* subject to the following conditions:                                 */
/*                                                                      */
/* The above copyright notice and this permission notice shall be       */
/* included in all copies or substantial portions of the Software.      */
/*                                                                      */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF   */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND                */
/* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS  */
/* BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN   */
/* ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN    */
/* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE     */
/* SOFTWARE.                                                            */
/*                                                                      */
/************************************************************************/

#ifndef DEFAULTVALUES_H
#define DEFAULTVALUES_H

// Image buffer size
#define DEFAULT_IMAGE_BUFFER_SIZE 1
// SMOOTH
#define SMOOTH_TYPE CV_GAUSSIAN // Options: [CV_BLUR_NO_SCALE,CV_BLUR,CV_GAUSSIAN,CV_MEDIAN,CV_BILATERAL]
#define SMOOTH_PARAM_1 9
#define SMOOTH_PARAM_2 0
#define SMOOTH_PARAM_3 0
#define SMOOTH_PARAM_4 0
// DILATE
#define DILATE_ITERATIONS 10
// ERODE
#define ERODE_ITERATIONS 10
// FLIP
#define FLIPMODE 0 // Options: [x-axis=0,y-axis=1,both axes=-1]
// CANNY
#define CANNY_THRESHOLD_1 10
#define CANNY_THRESHOLD_2 100

#endif // DEFAULTVALUES_H
