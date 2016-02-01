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
#define kAPSChromecastControl   1 << 10
#define kAPSChromecastControlString @"chromecast"

/**
 *  The Chromecast video control plugin. This control only appears when a Chromecast ready device is detected in the current network. To use, register with `APSMediaPlayer`:
 
        [[APSMediaPlayer sharedInstance] registerAdapter:[APSChromecastControlPlugin new] inGroup:kAPSMediaPlayerControlPluginsGroup];
 
 Registration is handled automatically when using `APSChromecastManager` to set your application ID.
 
 You can display the Chromecast playback control in the control bar by adding `chromecast` into the components array, under the `controls` section in your JSON configuration file:
 
         {
             "content": [
                 "url": "http://......",
                 "autoplay": true,
                 "controls": {
                     "components": [
                         "playback",
                         "totalTime",
                         "slider",
                         "currentTime",
                         "chromecast"
                     ]
                 }
             ]
         }
 
 Also, you can configure this programatically by adding `kAPSChromecastControl` to the `controlsParameters` property on `APSMediaUnit`:
 
        unit.controlsParameters = @{kAPSControlsComponents: @(APSPlaybackControl|APSCurrentTimeControl|APSTimeSliderControl|APSTotalTimeControl|kAPSChromecastControl|APSFullScreenControl)};
 
 */
@interface APSChromecastControlPlugin : NSObject<APSControlPluginProtocol>

@end
