//
// Created by DeanSu on 2019/8/20.
//

#include "rot13.h"

string rot13(string msg)
{
    const char * p = abc.data();
    string rs;
    size_t n;

    for (int i = 0; i < msg.size(); i++) {
        n = abc.find(msg[i]);
        if (n == std::string::npos) {
            n = ABC.find(msg[i]);
            p = ABC.data();
        } else {
            p = abc.data();
        }
        if (n == std::string::npos){
            rs += msg[i];
        } else {
            if (n + 13 > 26) {
                rs += p[n + 13 - 26];
            } else {
                rs += p[n + 13];
            }
        }
    }
    return rs;
}