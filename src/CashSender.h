//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include <string>
#include "ISendPayment.h"
class CashSender : public ISendPayment{
public:
    std::string sendPayment() override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
