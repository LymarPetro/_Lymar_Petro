//
//  MCLObjectMacros.h
//  MCLHomeTask
//
//  Created by Велес Тяжеловоз on 28.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef MCLHomeTask_MCLObjectMacros_h
#define MCLHomeTask_MCLObjectMacros_h

#define IDPAssignSetter(object, ivar, newIvar) \
if(NULL != object) { \
object->ivar = newIvar; \
}

#define IDPRetainSetter(object, ivar, newIvar) \
if(NULL != object && object->ivar != newIvar) { \
IDPObjectRetain(newIvar); \
IDPObjectRelease(object->ivar); \
object->ivar = newIvar; \
}


#endif
