#ifndef ACCOUNTS_UTIL
#define ACCOUNTS_UTIL
#include "Account.h"
#include "SavingAccount.h"
#include "Check_acc.h"
#include "TrustAccount.h"
#include <vector>

void display(std::vector<Account> &acc);
void withdraw(std::vector<Account> &acc,double amount);
void deposit(std::vector<Account> &acc,double amount);

void display(std::vector<Saving_acc> &acc);
void withdraw(std::vector<Saving_acc> &acc,double amount);
void deposit(std::vector<Saving_acc> &acc,double amount);

void display(std::vector<Check_acc> &acc);
void withdraw(std::vector<Check_acc> &acc,double amount);
void deposit(std::vector<Check_acc> &acc,double amount);

void display(std::vector<Trust_acc> &acc);
void withdraw(std::vector<Trust_acc> &acc,double amount);
void deposit(std::vector<Trust_acc> &acc,double amount);

#endif