//
// Created by Tere Solano on 29/8/2020.
//

#ifndef MY_PROJECT_NAME_ISENDPAYMENT_H
#define MY_PROJECT_NAME_ISENDPAYMENT_H
#include <sstream>
using namespace std;

class ISendPayment {
public:
    virtual ~ISendPayment();
  virtual string sendPayment() = 0;
};


#endif //MY_PROJECT_NAME_ISENDPAYMENT_H
