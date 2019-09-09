
Pod::Spec.new do |s|
  s.name             = 'AESEncryptSDK'
  s.version          = '1.0.0'
  s.summary          = 'AESEncryptSDK.'
  s.homepage         = 'https://github.com/huawtswork/AESEncryptSDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huawt' => 'ghost263sky@163.com' }
  s.source           = { :git => 'https://github.com/huawtswork/AESEncryptSDK.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.osx.deployment_target = '10.10'
  s.frameworks = 'Foundation'
  s.vendored_frameworks = 'AESEncryptSDK/Classes/*.framework'
end
