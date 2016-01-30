//
//  ChromeCastPlayer.h
//  Veeplay
//
//  Created by Ovidiu on 06/04/15.
//  Copyright (c) 2015 Veeplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleCast/GoogleCast.h>
#import "APSMediaPlayerProtocol.h"
#import "KRAdapter.h"

/**
 The APSChromecastPlayer class is a media renderer that handles playback on the Google Chromecast. To use, register with `APSMediaPlayer`:
 
     [[APSMediaPlayer sharedInstance] registerClass:[APSChromecastPlayer class] inGroup:kAPSMediaPlayerBackendsGroup];
 
 Registration is handled automatically when using `APSChromecastManager` to set your application ID.
 */
@interface APSChromecastPlayer : NSObject <APSMediaPlayerProtocol, GCKMediaControlChannelDelegate, KRAdapter>

@end
