//
//  GameHelp.h
//  Cocos2dChallenge
//
//  Created by Ricky on 12/27/12.
//  Copyright 2012 happybubsy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameHelp : CCLayer {
    
    double curTime;
    double nextTime;
    
    CGPoint backMenuLocation;
    
    CCMenuItemImage* backButton;
    
    CCSprite *bg;
}
+(CCScene*)scene;
@end
