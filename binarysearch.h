//
// Created by racso on 24/04/18.
//

#ifndef DOCUMENTOS_BINARYSEARCH_H
#define DOCUMENTOS_BINARYSEARCH_H

#include <iostream>
using namespace std;

class BinarySearch //for  ascending order
{
private:
    int *Plist;
public:
    BinarySearch(int *list, int listlength);
    void BSearch(int begin, int end, int target);
    ~BinarySearch();
};


#endif //DOCUMENTOS_BINARYSEARCH_H
