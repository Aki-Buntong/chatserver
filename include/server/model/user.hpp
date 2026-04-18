#ifndef USER_H
#define USER_H

#include<string>

//User表的ORM类
class User
{
private:
   int id;
   std::string name;
   std::string password;
   std::string state;

public:
  User(int id=-1, std::string name="", std::string pwd="", std::string state="offline"){
    this->id = id;
    this->name = name;
    this->password = pwd;
    this->state = state;
  }
  void setId(int id){this->id = id;}
  void setName(std::string name){this->name = name;}
  void setPwd(std::string pwd){this->password = pwd;}
  void setState(std::string state){this->state = state;}

  int getId(){return id;}
  std::string getName(){return name;}
  std::string getPwd(){return password;}
  std::string getState(){return state;}


};


#endif