//
//  ScreenLayer.h
//  Synergistic
//
//  Created by siteworx on 9/24/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>
#import "Screen.h"
#import "SelectableLayer.h"

@interface ScreenLayer : SelectableLayer {
    Screen *backingScreen;
}

- (id) initWithScreen: (Screen *) screen;

@end
