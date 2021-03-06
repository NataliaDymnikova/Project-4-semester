#pragma warning(disable:4496)
#include <opencv\cv.h>
#include <opencv\highgui.h>

using namespace cv;

class BoolPicture
{
public:
	BoolPicture(string nameOfPicture);
	~BoolPicture();
	bool **getPicture();
	int getWidth();
	int getHeight();
	
	/// to bool
	static bool **convertBWToBool(Mat picture);

private:
	bool **picture;
	int height;
	int width;

	/// Convert imageColor to black and white image.
	Mat convertToBlackAndWhite(Mat imageColor);
	
};

