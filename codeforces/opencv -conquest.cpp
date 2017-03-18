*#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include<stack>
#include<iostream>

using namespace cv;
using namespace std;

Mat a = imread("C:\\Users\\sony\\Documents\\Visual Studio 2013\\Projects\\OpenCVProject1\\x64\\Debug\\try.png", 0);
Mat x(a.rows, a.cols, CV_8UC1, Scalar(0));
typedef struct { int x; int y; } pix;

int isValid(Mat img, int x, int y)
{
if ((x < 0) || (y < 0) || (x >= img.rows) || (y >= img.cols))
return 0;
else
return 1;
}

void DFS_visit(int i, int j)
{
x.at<uchar>(i,j) = 1;
pix last, curr;
last.x = i;
last.y = j;
stack<pix>s;
s.push(last);
while (!s.empty())
{
curr = s.top();
s.pop();

for (int k =curr.x -1; k <= curr.x+1; k++)
for (int l = curr.y-1; l <= curr.y+1; l++)
if (isValid(a,k,l))
if ((x.at<uchar>(k,l)==0) && a.at<uchar>(k,l) == 255)
{
	pix rec;
	rec.x =k;
	rec.y = l;
s.push(rec);
x.at<uchar>(k, l) = 255;
}
}

}

int main()
{

namedWindow("obj", WINDOW_NORMAL);
int count = 1;
for (int i = 0; i < a.rows ; i++)
for (int j = 0; j < a.cols; j++)
if ((a.at<uchar>(i, j) == 255) && !x.at<uchar>(i, j))
{
DFS_visit(i, j);
count++;
}

cout << "no of blobs is " << count - 1;
imshow("obj", x);
waitKey(0);
return 0;
}
*/
