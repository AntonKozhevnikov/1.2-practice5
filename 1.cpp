#include <iostream>

using namespace std;
int binary_search( int sorted[],int x, int size )
{
    int h = size-1;
    int l = 0;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (sorted[mid] < x){
            l = mid + 1;
        }
        if (sorted[mid] > x){
            h = mid - 1;
        }
        if (sorted[mid]==x){
            cout << " number : " << mid + 1 << endl;
            break;
        }
    }
    return -1;
}

int main(){
int array[]={1,3,4,7,8};
int k = 8;
int s=sizeof(array)/sizeof(int);
binary_search(array, k,s);
};
