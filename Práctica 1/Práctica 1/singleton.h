//
//  singleton.h
//  Práctica 1
//
//  Created by Krikor Bisdikian G. on 14/8/15.
//  Copyright © 2015 Krikor Bisdikian G. All rights reserved.
//

#ifndef singleton_h
#define singleton_h


#include <iostream>
#include <fstream>
#include <string>

class Singleton
{
    

private:
        std::fstream log;
        Singleton();
    
        static Singleton instance;
public:
        ~Singleton();
        static Singleton& getSingleton();
        void logged(std::string actividad);
};

#endif /* singleton_h */
