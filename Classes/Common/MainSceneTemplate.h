//
//  MainMenuScene.h
//  cctest
//
//  Created by China Team on 4/9/13.
//
//

#ifndef __IGAME__MainSceneTemplate__
#define __IGAME__MainSceneTemplate__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"
#include "common.h"
#include "MainSceneTemplate.h"
#include "MainLayerBase.h"
#include "StringExt.h"

using namespace cocos2d;
using namespace cocos2d::extension;

/**
 * Data source that governs table backend data.
 */
class MainSceneTemplateDelegate
{
public:

    virtual void menuItemClicked(CCMenuItem *pItem) = 0;

};

class MainSceneTemplate : public MainLayerBase,
  public CCBSelectorResolver,
  public CCBMemberVariableAssigner,
  public CCNodeLoaderListener
{
public:
    ~MainSceneTemplate();
    MainSceneTemplate();
    
    static cocos2d::CCScene* scene();
    
    void menuBarBtnClicked(CCObject *pSender);
    
    void toolBarBtnClicked(CCObject *pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
    
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char* pSelectorName);
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
    
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);
    virtual void onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader);
    
    virtual bool init();
    
    CCLabelTTF *mlblName;
    CCLabelTTF *mlblHealth;
    CCLabelTTF *mlblPower;
    
    CCLabelTTF *mlblGold;
    CCLabelTTF *mlblBronze;
    CCLabelTTF *mlblGrade;
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(MainSceneTemplate, create);
    
    CC_SYNTHESIZE(MainSceneTemplateDelegate*, m_delegate, delegate);

};

#endif
