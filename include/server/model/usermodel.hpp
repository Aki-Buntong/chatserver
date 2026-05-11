#ifndef USERMODEL_H
#define USERMOSEL_H

#include "user.hpp"

// User表的数据操作类
class UserModel
{
private:
public:
    // User表的增加方法
    bool insert(User &user);

    // 根据用户号码查询用户信息
    User query(int id);

};

#endif