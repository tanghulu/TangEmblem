//
//  HelloWorldLayer.h
//  TangEmblem
//
//  Created by zhugaopeng on 15/11/1.
//  Copyright tanghulu 2015年. All rights reserved.
// 


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
