//
//  MainLayerBase.h
//  iGame
//
//  Created by yao on 13-4-20.
//
//

#ifndef __iGame__MainLayerBase__
#define __iGame__MainLayerBase__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"
#include "LoadingScene.h"

using namespace cocos2d;
using namespace cocos2d::extension;

class MainLayerBase : public cocos2d::CCLayer
{
public:
    MainLayerBase();
protected:
    void OpenNewScene(const char *pCCBFileName);
    void PushScene(const char *pCCBFileName);
    CCNode* GetLayer(const char *pCCBFileName);
    CCRenderTexture* createStroke(cocos2d::CCLabelTTF *label, float size, cocos2d::ccColor3B color);
    void ShowLoad(const char *pCCBFileName);
    void HideLoad();
    
private:
    LoadingScene *loading;
};

#endif /* defined(__iGame__MainLayerBase__) */
