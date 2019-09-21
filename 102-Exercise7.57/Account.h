/*
 *      Author: Quang Tran
 *      Date: September 21, 2019
 */

#ifndef INC_102_EXERCISE7_57_ACCOUNT_H
#define INC_102_EXERCISE7_57_ACCOUNT_H

#include <iostream>
#include <string>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);

private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
    static constexpr int period = 30;
    double daily_tbl[period];
};

#endif //INC_102_EXERCISE7_57_ACCOUNT_H
