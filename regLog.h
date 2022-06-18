#pragma once
#include<string>
bool userRegister(std::string name, std::string pass, std::string mail);
bool userLogin(std::string userName, std::string password);
bool frgt(std::string userName);
bool checkMail(std::string name, std::string mail);
void resetPass(std::string name, std::string pass);
bool isCornerPresent(std::string str, std::string corner);
