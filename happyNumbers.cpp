#include <iostream>
#include <string>
using namespace std;

int main()
{
  int left, right, left1, left2, left3, right1, right2, right3, sum1, sum2;

  cout << "Happy six-digit numbers:"<< endl;
  
  for (int n=100000; n<1000000; n++)
   {
   left = n / 1000;
   right = n - left*1000;
   
   left1 = left/100;
   left2 = (left - left1 * 100) / 10;
   left3 = left - left1 * 100 - left2 * 10;
   
   right1 = right/100;
   right2 = (right - right1 * 100) / 10;
   right3 = right - right1 * 100 - right2 * 10;
   
   if (left1+left2+left3==right1+right2+right3) cout<<n<<endl;
   }
}
