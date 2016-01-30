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

/**
 *  Posted when a Chromecast device comes online
 */
extern NSString *const APSMediaPlayerChromecastDeviceOnline;
/**
 *  Posted when a Chromecast device goes offline
 */
extern NSString *const APSMediaPlayerChromecastDeviceOffline;
/**
 *   Posted when the player connected to a Chromecast compatible device
 */
extern NSString *const APSMediaPlayerChromecastConnectedNotification;
/*
 *  Posted when the player disconnected from a Chromecast compatible device
 */
extern NSString *const APSMediaPlayerChromecastDisconnectedNotification;

@interface APSChromecastManager : NSObject<GCKDeviceScannerListener, GCKDeviceManagerDelegate, UIActionSheetDelegate>

+ (instancetype)sharedInstance;

/**
 *  Set the Chromecast application ID to be launched when playing via Chromecast
 */
@property (nonatomic) NSString *chromecastAppId;

/**-----------------------------------------------------------------------------
 * @name Chromecast
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
