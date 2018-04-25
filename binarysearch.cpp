//
// Created by racso on 24/04/18.
//

///
/// \brief binarysearch::binarysearch
/// \param arr: es una matriz para buscar en ella
/// \param l: es un índice del límite izquierdo
/// \param r: es un índice de límite derecho
/// \param x: es el elemento que se desea buscar
///

#include "binarysearch.h"

BinarySearch::BinarySearch(int *list, int listlength)
{
    Plist= new int[listlength];
    for(int i=0; i<listlength;i++)
        Plist[i]=list[i];
}
BinarySearch::~BinarySearch()
{
    delete []Plist;
}
void BinarySearch::BSearch(int begin, int end, int target)
{
    int m;
    m=(begin+end)/2;
    if(Plist[m]==target)
    {
        cout<<" The Element   "<<target<<" is found at postion  "<<m+1<<endl;
    }
    else if(begin>=end){
        cout<<" The Element   "<<target<<" is not found.  "<<endl;
        exit(-1);
    }
    else if(target>Plist[m])
        BSearch(m+1, end, target);
    else
        BSearch(begin, m-1, target);
}

