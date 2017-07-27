#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
    Mat srcImg = imread("../image/lena.jpg");
    imshow("srcImg",srcImg);
    int key = waitKey(0);
    if(key == 'q')
    {
        return 0;
    }
    return 0;
}