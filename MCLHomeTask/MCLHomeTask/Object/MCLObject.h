//
//  MCLObject.h
//  MCLHomeTask
//
//  Created by Велес Тяжеловоз on 28.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef __MCLHomeTask__MCLObject__
#define __MCLHomeTask__MCLObject__

#include <stdio.h>

typedef void (*IDPObjectDeallocatorCallback)(void *);

typedef struct {
    uint64_t _referenceCount;
    IDPObjectDeallocatorCallback _deallocator;
} IDPObject;

extern
void *__IDPObjectCreate(size_t objectSize, IDPObjectDeallocatorCallback deallocateCallback);

#define IDPObjectCreateOfType(type) \
__IDPObjectCreate(sizeof(type), (IDPObjectDeallocatorCallback)__##type##Deallocate)

extern
void *IDPObjectRetain(void *object);

extern
void IDPObjectRelease(void *object);

extern
uint64_t IDPObjectGetReferenceCount(void *object);

extern
void __IDPObjectDeallocate(void *object);

#endif /* defined(__MCLHomeTask__MCLObject__) */
