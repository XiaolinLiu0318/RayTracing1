//#include<opencv2/opencv.hpp>
//#include<iostream>
//#include<opencv2/highgui/highgui_c.h>
//
//
//
//using namespace std;
//using namespace cv;
//cv
//int main(int argc, char** argv) {
//	Mat src;
//	src = imread("D:/4.jpg");
//	if (src.empty()) {
//		cout << "could not load image..." << endl;
//		return -1;
//	}
//	namedWindow("input", CV_WINDOW_AUTOSIZE);
//	imshow("input", src);
//
//	Mat dst;
//	cvtColor(src, dst, CV_BGR2GRAY);//��һ������Ϊԭͼ�󣬵ڶ�������Ϊת�����ͼ�󣬵���������Ϊ��ɫת���ռ��־��
//	printf("input image channels:%d\n", src.channels());
//	printf("output image channels:%d\n", dst.channels());
//
//	const uchar* firstRow = dst.ptr<uchar>(0);
//	printf("firet pixel value:%d\n", *firstRow);
//
//	namedWindow("output", CV_WINDOW_AUTOSIZE);
//	imshow("output", dst);
//
//	waitKey(0);
//	return 0;
//}