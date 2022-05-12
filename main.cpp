#include <iostream>

using namespace std;
template <size_t N>

int find_terms(int (&array)[N], int k){
    const size_t s = N;
    int i, j = 0;
    int c, d = 0;
    while(j < s){
        d = array[j];
        while(i < j){
            c = array[i];
            if( (c + d) == k){
                    cout << "First number: " << array[i] << " Second number: " << array[j];
                break;
            }else{
                i++;
                continue;
            }
        }
        j++;
        if((c + d) == k){
            break;
        }else{
            i = 0;
            continue;
        }
    };
    return 0;
}
int main()
{
    int array[] = {0,1, 2, 3, 4, 5, 6, 7, 8};
    int sum = 9;
    find_terms(array, sum);
}
