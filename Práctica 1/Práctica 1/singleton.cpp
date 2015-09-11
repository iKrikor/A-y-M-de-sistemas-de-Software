//
//  singleton.cpp
//  Práctica 1
//
//  Created by Krikor Bisdikian G. on 14/8/15.
//  Copyright © 2015 Krikor Bisdikian G. All rights reserved.
//

#include "singleton.h"
#include <time.h>

using namespace std;

Singleton::Singleton(){
    log.open("/Users/iKrikor/Library/Mobile\ Documents/com\~apple\~CloudDocs/Tec/5to\ Semestre/A\ y\ M\ de\ sistemas\ de\ Software/Práctica\ 1/Práctica\ 1/log.txt", ios::app);
}

Singleton::~Singleton(){
    log.close();
}

Singleton Singleton::instance;

Singleton& Singleton::getSingleton()
{
    return instance;
}

void Singleton::logged(string actividad)
{
    
    if (log.is_open())
    {
        time_t now = time(0);
        log  << actividad << " -> " << ctime(&now) <<  endl;
    }
    else cout << "Unable to open file\n";
    
    
}
