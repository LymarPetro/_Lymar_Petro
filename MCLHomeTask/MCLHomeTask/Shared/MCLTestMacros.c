//
//  MCLTestMacros.c
//  MCLHomeTask
//
//  Created by Велес Тяжеловоз on 28.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include "MCLTestMacros.h"

#pragma mark -
#pragma mark Private Declarations

static uint8_t kIDPTestLevel = 0;

static
void IDPPrintMinusSymbolCountOf(uint8_t count);

#pragma mark -
#pragma mark Public Implementations

void _IDPPrintTestHeader(void) {
    IDPPrintMinusSymbolCountOf(++kIDPTestLevel);
}

void _IDPPrintTestFooter(void) {
    IDPPrintMinusSymbolCountOf(kIDPTestLevel--);
}

#pragma mark -
#pragma mark Private Implementations

void IDPPrintMinusSymbolCountOf(uint8_t count) {
    printf("\n");
    for(uint8_t iterator = 0; iterator < count; iterator ++) {
        printf("-");
    }
}

