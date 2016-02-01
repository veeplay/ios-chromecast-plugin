//
//  APSChromeCastManager.h
//  Veeplay
//
//  Created by gabi on 27.01.2016.
//  Copyright © 2016 Appscend. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleCast/GoogleCast.h>
#import "APSChromecastControlPlugin.h"

///--------------------
/// @name Notifications
///--------------------

extern NSString *const APSMediaPlayerChromecastDeviceOnline;
extern NSString *const APSMediaPlayerChromecastDeviceOffline;
extern NSString *const APSMediaPlayerChromecastConnectedNotification;
extern NSString *const APSMediaPlayerChromecastDisconnectedNotification;


/**
 The `APSChromecastManager` is a singleton that manages Google Cast connections for the Veeplay media player. To setup, simply set your cast app id on the shared instance:
 
        [APSChromecastManager sharedInstance].chromecastAppId = @"YOURAPPID";
 
 ## Notifications
 
 - **APSMediaPlayerChromecastDeviceOnline** - Posted when a Chromecast device comes online.
 - **APSMediaPlayerChromecastDeviceOffline** - Posted when a Chromecast device goes offline.
 - **APSMediaPlayerChromecastConnectedNotification** - Posted when the manager connected to a Chromecast compatible device.
 - **APSMediaPlayerChromecastDisconnectedNotification** - Posted when the manager disconnected from a Chromecast compatible device.
 */
@interface APSChromecastManager : NSObject<GCKDeviceScannerListener, GCKDeviceManagerDelegate, UIActionSheetDelegate>

/**
 *  Returns the shared `APSChromecastManager` instance, creating it if necessary.
 *
 *  @return The shared `APSChromecastManager` instance
 */
+ (instancetype)sharedInstance;

/**
 *  Sets the Chromecast application ID to be launched when playing via Chromecast.
 */
@property (nonatomic) NSString *chromecastAppId;

/**-----------------------------------------------------------------------------
 * @name Chromecast device access
 * -----------------------------------------------------------------------------
 */
/**
 *  Indicates whether there is a Chromecast device available
 */
- (BOOL)chromecastAvailable;
/*
 *  Indicates whether the movie player is currently playing video via Chromecast
 */
- (BOOL)chromecastActive;
/**
 *  Returns a list of detected GCKDevices
 */
- (NSArray*)chromecastDevices;
/**
 *  Show an UIActionSheet with detected devices
 */
- (void)showChromecastDevices;
/**
 *  Connect to a specified device
 *
 *  @param device A GCKDevice to connect to
 *
 */
- (void)connectToChromecastDevice:(GCKDevice*)device;
/**
 *  Get the current GCKDeviceManager
 */
- (GCKDeviceManager*)currentChromecastDeviceManager;
/**
 *  Get the current GCKDevice
 */
- (GCKDevice*)currentChromecastDevice;
/**
 *  Get the current media control channel
 */
- (GCKMediaControlChannel*)currentChromecastMediaControlChannel;
/*
 *  Disconnect from the current connected device
 */
- (void)disconnectChromecast;

@end
