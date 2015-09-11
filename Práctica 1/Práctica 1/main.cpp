//
//  main.cpp
//  Práctica 1
//
//  Created by Krikor Bisdikian G. on 14/8/15.
//  Copyright © 2015 Krikor Bisdikian G. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Singleton.h"

using namespace std;

int main(int argc, const char * argv[]) {


        Singleton& object = Singleton::getSingleton();
    
    cout<<"¿Qué acción está realizando?"<<endl;
    string accion;
    getline(cin, accion);
        object.logged(accion);
    
    
        return 0;
}