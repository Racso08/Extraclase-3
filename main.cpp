
#include "binarysearch.h"
#include <chrono>
#include <vector>

using namespace std::chrono;

int main(int argc, char *argv[])
{
    int array[14000];
    int pos = 0;
    int tamanoArray = sizeof(array)/ sizeof(*array)-1;
    while(pos!=tamanoArray){
        array[pos] = pos;
        pos = pos + 1;
    }
    int target=13998;
    int lenght = 14000;

    auto start = std::chrono::high_resolution_clock::now();

    BinarySearch bs(array,lenght);
    bs.BSearch(0,13999,target);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop-start).count();
    std::cout<<"Duración de la función: "<<duration<<std::endl;
    return 0;
}