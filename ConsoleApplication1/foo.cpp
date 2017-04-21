#include <time.h>
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/mat.hpp"
#include "opencv/cv.hpp"

#include <iostream>

#ifdef _cplusplus 
extern "C" int f(int);
#endif 

using namespace std;
using namespace cv;

int f(int i)
{
	cout << "CPP SON: " << i << endl;
	i--;

	//Mat image;

	//image = imread( "image1.jpg", 1 );

	//namedWindow( "image1.jpg", CV_WINDOW_AUTOSIZE );

	//imshow( "image1.jpg", image );

	//waitKey(0);

	return i;
}