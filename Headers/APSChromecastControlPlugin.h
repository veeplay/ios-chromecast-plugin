//
//  APSChromeCastControlPlugin.h
//  Veeplay
//
//  Created by gabi on 27.01.2016.
//  Copyright © 2016 Appscend. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APSControlPluginProtocol.h"

#define kAPSControlsChromecastDisconnectedImage @"chromecastDisconnectedImage"
#define kAPSControlsChromecastConnectedImage @"chromecastConnectedImage"
/**
 *  The Chromecast video control. This control only appears when a Chromecast ready device is detected in the current network.
 */
#define kAPSChromecastControl   1 << 10
#define kAPSChromecastControlString @"chromecast"

@interface APSChromecastControlPlugin : NSObject<APSControlPluginProtocol>

@end
