#include "opencv2/highgui/highgui.hpp"
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

pix DFS_visit(int i, int j)
{
pix cm;
cm.x=0;
cm.y=0;
int counter =1;
x.at<uchar>(i,j) = 1;
pix last, curr;
last.x = i;
cm.x+=i;
cm.j+=j;
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
	cm.x+=k;
	cm.y+=l;
	counter++;
s.push(rec);
x.at<uchar>(k, l) = 255;
}
}
cm.x=(cm.x)/counter;
cm.y=(cm.y)/counter;
return cm;
}

int main()
{

namedWindow("obj", WINDOW_NORMAL);
int count = 1;
vector<pix> vect;
int a=0,b=0,c=0,d=0,e=0,f=0,countab=0,countcd=0 countef=0;
for (int i = 0; i < a.rows ; i++)
for (int j = 0; j < a.cols; j++){
if(a.at<ucahr>(i,j)<=45 && a.at.<uchar>(i,j)>30)
{
    a+=i;
    b+=j;
    countab++;
}
else if(a.at<ucahr>(i,j)<=145 && a.at.<uchar>(i,j)>100)
{
    c+=i;
    d+=j;
    countcd++;
}
else if ((a.at<uchar>(i, j) == 255) && !x.at<uchar>(i, j))
{


vect.push_back(DFS_visit(i, j));
count++;
}
else if(a.at<ucahr>(i,j)<=145 && a.at.<uchar>(i,j)>100)
{
    e+=i;
    f+=j;
    countef++;
}
}
a=a/countab;
b=b/countab;
c=c/countcd;
d=d/countcd;
e=e/countef;
f=f/countef;

cout << "no of blobs is " << count - 1;
imshow("obj", x);
waitKey(0);
return 0;
}
// (a,b) are the center of the marker 1
//(c,d) are teh center of teh marker 2
//(e,f) are the center of teh bot original position
//vect containd

