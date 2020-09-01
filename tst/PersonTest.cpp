//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include <ISendPayment.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    Person person;
    ISendPayment* paymentByTransfer = new BankTransferSender();
    ISendPayment* paymentByCash = new CashSender();
    ISendPayment* paymentByCheck = new CheckSender();

    EXPECT_EQ(person.processPayment(paymentByTransfer), "Sending the money by transference");
    EXPECT_EQ(person.processPayment(paymentByCash), "Give the money in the hands");
    EXPECT_EQ(person.processPayment(paymentByCheck), "Sending the check with the money");


}
