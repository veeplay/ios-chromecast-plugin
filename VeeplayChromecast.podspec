Pod::Spec.new do |s|
  s.name             = "VeeplayChromecast"
  s.version          = "1.0.1"
  s.summary          = "Veeplay Chromecast Plugin"
  s.homepage         = "http://veeplay.com"
  s.license          = { :type => "Commercial", :text => "Contact office@veeplay.com" }
  s.author           = { "Veeplay" => "gabi@veeplay.com" }
  s.source           = { :git => "https://github.com/veeplay/ios-chromecast-plugin.git", :tag => s.version.to_s }

  s.platform     = :ios, "6.0"
  s.requires_arc = true

  s.documentation_url = 'http://veeplay.github.io/ios-chromecast-plugin/'

  s.source_files         = "Headers/*.h"
  s.resources            = "VeeplayChromecast.bundle"
  s.public_header_files  = "Headers/*.h"
  s.vendored_libraries   = "libVeeplayChromecast.a"

  s.dependency "Veeplay"
  s.dependency "google-cast-sdk"
end
