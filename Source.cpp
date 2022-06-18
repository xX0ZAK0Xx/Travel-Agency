#include "regLog.h"
#include <fstream>

using  namespace std;
bool isCornerPresent(string str, string corner)
{
    int n = str.length();
    int cl = corner.length();

    if (n < cl)
        return false;

    return (str.substr(n - cl, cl).compare(corner) == 0);
}

bool userRegister(std::string name, std::string pass, std::string mail) {
    
    ofstream registered;
    registered.open("login"+name + ".txt", ios_base::out | ios_base::in);//it will open a file but wont create or override 
    if (registered.is_open()) {
        //returns true if a file with the same name exists in the directory
        registered.close();
        return false;
    }
    else {

        registered.open("login" + name + ".txt");
        //              here enter your own directory
        registered << mail << endl << pass << endl << name;
        registered.close();
        return true;
    }
}

bool userLogin(std::string userName, std::string password ) {
    
    std::string fileMail, filePass, fileName;
    ifstream loginFile;
    loginFile.open("login" + userName + ".txt", ios_base::in);
    if (loginFile.is_open()) {
        getline(loginFile, fileMail);//gets the 1st line from the file
        getline(loginFile, filePass);//gets the 2nd line from the file
        getline(loginFile, fileName);//gets the 3rd line from the file
        loginFile.close();
    }
    if (fileName == userName && filePass == password) {
        /*
                         */
        ofstream current;
        current.open("Curr.txt", ios_base::out);
        ofstream tck;
        tck.open("ticket" + userName + ".txt", ios_base::out | ios_base::in);
        current << userName << endl << filePass << endl << fileMail;
        current.close();
        //tck.close();
        return true;
    }
    return false;
}
bool frgt(std::string userName) {
    std::string fileMail, filePass, fileName;
    ifstream loginFile;
    loginFile.open("login" + userName + ".txt", ios_base::in);
    if (loginFile.is_open()) {
        getline(loginFile, fileMail);//gets the 1st line from the file
        getline(loginFile, filePass);//gets the 2nd line from the file
        getline(loginFile, fileName);//gets the 3rd line from the file
        loginFile.close();
        return true;
    }
    return false;
}

bool checkMail(std::string name, std::string mail ) {

    std::string fileMail, filePass, fileName;
    ifstream loginFile;
    loginFile.open("login" + name + ".txt", ios_base::in);
    if (loginFile.is_open()) {
        getline(loginFile, fileMail);//gets the 1st line from the file
        getline(loginFile, filePass);//gets the 2nd line from the file
        getline(loginFile, fileName);//gets the 3rd line from the file

        if (mail == fileMail) {
            loginFile.close();
            return true;
        }
        loginFile.close();
        return false;
    }
}


void resetPass(std::string name, std::string pass) {

    std::string fileMail, filePass, fileName;
    ifstream loginFile;
    loginFile.open("login" + name + ".txt", ios_base::in);
    if (loginFile.is_open()) {
        getline(loginFile, fileMail);//gets the 1st line from the file
        getline(loginFile, filePass);//gets the 2nd line from the file
        getline(loginFile, fileName);//gets the 3rd line from the file
        loginFile.close();
    }
    ofstream registered;
    registered.open("login" + name + ".txt",ios_base::out);
    registered << fileMail << endl << pass << endl << name;
    registered.close();
}