//
//  MCLTestMacros.h
//  MCLHomeTask
//
//  Created by Велес Тяжеловоз on 28.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef __MCLHomeTask__MCLTestMacros__
#define __MCLHomeTask__MCLTestMacros__

#include <stdio.h>

extern
void _IDPPrintTestHeader(void);

extern
void _IDPPrintTestFooter(void);

#define performTest(testFunction) \
do { \
_IDPPrintTestHeader(); \
printf(" %s started...\n", #testFunction); \
testFunction(); \
_IDPPrintTestFooter(); \
printf(" %s finished.\n", #testFunction); \
} while(0)

#endif /* defined(__MCLHomeTask__MCLTestMacros__) */

