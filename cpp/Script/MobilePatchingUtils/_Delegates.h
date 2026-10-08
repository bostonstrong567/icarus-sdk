DELEGATE() void OnContentInstallFailed(FText ErrorText, int32 ErrorCode);  // parameters 0x1C
DELEGATE() void OnContentInstallSucceeded();
DELEGATE() void OnRequestContentFailed(FText ErrorText, int32 ErrorCode);  // parameters 0x1C
DELEGATE() void OnRequestContentSucceeded(UMobilePendingContent* MobilePendingContent);  // parameters 0x8
