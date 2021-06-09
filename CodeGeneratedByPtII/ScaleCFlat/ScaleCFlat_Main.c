/* Generated by Ptolemy II (http://ptolemy.eecs.berkeley.edu)
Copyright (c) 2005-2016 The Regents of the University of California.
All rights reserved.
Permission is hereby granted, without written agreement and without
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the above
copyright notice and the following two paragraphs appear in all copies
of this software.
IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
SUCH DAMAGE.
THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
ENHANCEMENTS, OR MODIFICATIONS.
*/
#include "ScaleCFlat_Main.h"
#include <time.h>
int main(int argc, char *argv[]) {
    clock_t start, end;
start = clock();           /*记录起始时间*/
    //boolean completedSuccessfully = false;
    for(int i= 0;i<1000000;i++)
    {
        
    initialize();
    while (true) {
        if (!iterate()) {
            break;
        }
        //completedSuccessfully = true;
    }
    wrapup();
    }
    end = clock();           /*记录结束时间*/
{
    long long seconds  =(end - start);
    fprintf(stderr, "Use time is: %lld\n", seconds);
}
    exit(0);
}
void preinitialize() {
    emptyToken.type = -1;
    iterationCount = 0;
    ScaleCFlat_New();
    (*(ScaleCFlat->preinitialize))(ScaleCFlat);
}
void initialize(void) {
    preinitialize();
(*(ScaleCFlat->initialize))(ScaleCFlat);}
boolean iterate() {
    boolean result = true;
    iterationCount++;
    if ((*(ScaleCFlat->prefire))(ScaleCFlat)) {
        (*(ScaleCFlat->fire))(ScaleCFlat);
        result = (*(ScaleCFlat->postfire))(ScaleCFlat);
    }
    return result;
}
void wrapup(void) {
(*(ScaleCFlat->wrapup))(ScaleCFlat);}
