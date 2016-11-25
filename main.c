/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *        Version:  1.0
 *        Created:  11/25/2016 02:16:32 PM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  nikkolasg (), nikkolasg@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"
#include "net.h"

const char * banner = "cosic - Collective Signing protocol in C";

void usage() {
    printf("%s\n\n",banner);
    printf("WARNING: This software is purely experimental and has not been audited in\n"
           "any professional way. Moreover, it only provides a small subset of the CoSi"
           "protocol for the moment, merely for language compatibility testing."
           "USE AT YOUR OWN RISK.\n\n");
    printf("./cosic <address> <private file>\n"
           " - address is the ipv4 address you want cosic to bind for incoming connections\n"
           " - private file is the path of the file which contains your private ed25519\n"
           "   key.\n");
}

int main(int argc, char *argv[]) {
    if (argc != 3) { 
        usage();
        fail;
    }

    pout("%s",banner);
    
    // validate ip address
    char *ip = argv[1];
    if (!net_is_ip_valid(ip)) {
        pfail("ipv4 address \"%s\" not valid.",ip);
    } 
    pout("binding to %s",ip);

    // read private key
    

}