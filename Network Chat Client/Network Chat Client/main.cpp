//
//  main.cpp
//  Network Chat Client
//
//  Created by Manish Jangir on 05/03/16.
//  Copyright © 2016 Manish Jangir. All rights reserved.
//


#include <iostream>

#include "unp.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int socketFD=-1;
    socketFD = socket(AF_INET, SOCK_STREAM, 0);
    
    struct sockaddr_in servAddr;
    bzero(&servAddr, sizeof(servAddr));
    servAddr.sin_family = AF_INET;
    servAddr.sin_port = 3999;
    inet_pton(AF_INET, "127.0.0.1",&servAddr.sin_addr);
    cout << "Attempting to connect ... " << endl;
    int err = connect(socketFD, (struct sockaddr* )&servAddr, sizeof(servAddr));
    if (err != 0)
    {
        cout << errno << endl;
        close(socketFD);
    }
    std::cout << "Hello, World!\n";
    return 0;
}
