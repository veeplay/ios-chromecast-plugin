## Veeplay Chromecast Plugin

This plugin enables the [Veeplay Media Player](http://veeplay.com) to connect and send playback to the [Google Chromecast](https://www.google.com/chromecast).

To install:

* Add the following line to your Podfile:

        pod "VeeplayChromecast"

* Alternatively, if installing without CocoaPods, get the latest static library, header files and assets [from the repository](https://github.com/veeplay/ios-chromecast-plugin). Also, install the latest version of the [Google Cast iOS Sender API library](https://developers.google.com/cast/docs/ios_sender).
* Import the VeeplayChromecastManager header file:

        #import "VeeplayChromecastManager.h"


To start the plugin, set your Chromecast application id on the shared instance of `APSChromeCastManager`:

    [APSChromecastManager sharedInstance].chromecastAppId = @"appid"

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

Also, you can configure this programatically by adding kAPSChromecastControl to the `controlsParameters` property on `APSMediaUnit`:

        unit.controlsParameters = @{kAPSControlsComponents: @(APSPlaybackControl|APSCurrentTimeControl|APSTimeSliderControl|APSTotalTimeControl|kAPSChromecastControl|APSFullScreenControl)};
