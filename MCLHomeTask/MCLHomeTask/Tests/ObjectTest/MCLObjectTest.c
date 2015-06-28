//
//  MCLObjectTest.c
//  MCLHomeTask
//
//  Created by Велес Тяжеловоз on 28.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//
#include <assert.h>

#include "MCLObjectTest.h"
#include "MCLObject.h"
#include "MCLTestMacros.h"

#pragma mark -
#pragma mark Private Declaration

static
void IDPObjectOneObjectCreationTest();


#pragma mark -
#pragma mark Public Implementations

void IDPObjectBehaviorTests(void) {
    performTest(IDPObjectOneObjectCreationTest);
}

#pragma mark -
#pragma mark Private Implementations

void IDPObjectOneObjectCreationTest() {
    //  after IDPObject was created
    IDPObject *object = IDPObjectCreateOfType(IDPObject);
    
    //      object should not be NULL
    assert(NULL != object);
    
    //      object reference count must be equal to 1
    assert(1 == IDPObjectGetReferenceCount(object));
    
    //      after object retaining
    IDPObject *retainedObject = IDPObjectRetain(object);
    
    //          retained object must be equal to object
    assert(object == retainedObject);
    
    //          object reference count must be equal to 2
    assert(2 == IDPObjectGetReferenceCount(object));
    
    //      after releasing the object
    IDPObjectRelease(retainedObject);
    
    //          object rerefence count must be equal to 1
    assert(1 == IDPObjectGetReferenceCount(object));
    
    IDPObjectRelease(object);
}


