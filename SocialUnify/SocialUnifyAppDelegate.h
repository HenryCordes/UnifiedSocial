//
//  SocialUnifyAppDelegate.h
//  SocialUnify
//
//  Created by Bernice Rozeboom on 29-11-11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SocialUnifyViewController;

@interface SocialUnifyAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SocialUnifyViewController *viewController;

@end
