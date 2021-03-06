//
//  TaskListSceneLoader.h
//  cctest
//
//  Created by China Team on 4/9/13.
//
//

#ifndef cctest_TaskListSceneLoader_h
#define cctest_TaskListSceneLoader_h

#include <iostream>
#include "cocos2d.h"
#include "TaskListScene.h"

USING_NS_CC;

class TaskListSceneLoader : public CCLayerLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(TaskListSceneLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(TaskListScene);
};

#endif
