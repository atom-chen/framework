//
//  OPPurchaseListener.h
//  OurpalmSDK
//
//  Created by op-mac1 on 13-7-29.
//
//

#ifndef OurpalmSDK_OPPurchaseListener_h
#define OurpalmSDK_OPPurchaseListener_h

class PurchaseListener
{
public:
    // 返回购买结果
    virtual void OnPurchaseResult(bool result, const char* goodid){}
};

#endif
