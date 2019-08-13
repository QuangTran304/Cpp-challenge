//
// Created by Quang Tran on 2019-08-13.
//

#ifndef INC_98_EXERCISE7_31_CLASSPAIR_H
#define INC_98_EXERCISE7_31_CLASSPAIR_H

class Y;        // Need to declare before we can use it as type.
class X {
    int mem1 = 0;
    Y* memberY;
};

class Y {
    int mem1 = 1;
    X* memberX;
};

#endif //INC_98_EXERCISE7_31_CLASSPAIR_H
