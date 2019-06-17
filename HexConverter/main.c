//
//  main.c
//  HexConverter
//
//  Created by Hans van Riet on 4/25/14.
//  Copyright (c) 2014 Hans van Riet. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char hexstring[100];
    int number;
    
    if (argc == 2) {
        hexstring[0] = '\0';
        strcat(hexstring, argv[1]);
    } else {
        printf("Enter your hexadecimal number: ");
        scanf("%s", hexstring);
    }
    number = (int)strtol(hexstring, NULL, 16);
    for (int i = 0 ; i < strlen(hexstring) ; i++) {
        hexstring[i] = toupper(hexstring[i]);
    }
    printf("Hexadecimal: %s \tconverts to: %d decimal.\n", hexstring, number);
    
    return 0;
}