//
//  main.cpp
//  NeworkChat Server
//
//  Created by Manish Jangir on 05/03/16.
//  Copyright © 2016 Manish Jangir. All rights reserved.
//

#include <iostream>
#include "unp.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int servFD,clientFD;
    struct sockaddr_in servAddr, clientAddr;
    socklen_t cliLen;
    bzero(&servAddr, sizeof(servAddr));
    bzero(&clientAddr, sizeof(clientAddr));
    
    cout << "Running Server ... "<< endl;
    servFD = socket(AF_INET, SOCK_STREAM, 0);
    servAddr.sin_family = AF_INET;
    servAddr.sin_port = 3999;
    servAddr.sin_addr.s_addr=INADDR_ANY;
    //    inet_pton(AF_INET, INADDR_ANY, &servAddr.sin_addr);
    bind(servFD, (struct sockaddr*)&servAddr, sizeof(servAddr));
    listen(servFD, 2);
    cliLen = sizeof(clientAddr);
    clientFD = accept(servFD, (struct sockaddr*) &clientAddr, & cliLen);
    if (clientFD > -1)
        cout << "Connected..." << endl;
    else
        cout << errno << endl;
    close(servFD);
    close(clientFD);
    std::cout << "Hello, World!\n";
    return 0;
}
