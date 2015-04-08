#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;

int main (int argc, char** argv) {
	if (argc != 2) {
		cout << "Usage: musonize <image-file>" << endl;
		return -1;
	}

	cv::Mat image;
	image = cv::imread(argv[1], CV_LOAD_IMAGE_COLOR);

	if (!image.data) {
		cout << "Could not open the image" << endl;
		return -1;
	}

	cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Window", image);

	cv::waitKey(0);
	return 0;
}
