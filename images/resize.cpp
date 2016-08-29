#include "opencv2/highgui/highgui.hpp"
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <vector>
#include <stdio.h>


#define PI 3.1415926

using namespace cv;

int main(int argc, char* argv[]) {
Size size(294,294);
Mat img =imread("/home/harshit/Desktop/profile.jpg",1);
Mat img1;
resize(img,img,size);
imwrite("/home/harshit/Desktop/i1.jpg",img);
//imshow("qin",img1);


}

