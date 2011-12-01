//
//  SocialUnifyViewController.h
//  SocialUnify
//
//  Created by Henry Cordes on 29-11-11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SA_OAuthTwitterController.h"

@class SA_OAuthTwitterEngine;

@interface SocialUnifyViewController : UIViewController <SA_OAuthTwitterControllerDelegate> {
	SA_OAuthTwitterEngine *_engine;
}

@end
