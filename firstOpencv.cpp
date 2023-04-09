#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
    cout << "当前OpenCV版本为" << CV_VERSION << endl;
    Mat img = imread("C:\\Users\\zx199\\Pictures\\girl.jpg");
    cout<<img.size<<endl;
    namedWindow("img", WINDOW_NORMAL);
    imshow("img", img);
    waitKey();
    destroyWindow("img");
    system("pause");
    return 0;
}