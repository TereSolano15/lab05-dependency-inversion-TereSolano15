//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

#include "Person.h"
#include <string>
#include "ISendPayment.h"
class CheckSender : public ISendPayment {
public:
    std::string sendPayment() override;
};

#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
