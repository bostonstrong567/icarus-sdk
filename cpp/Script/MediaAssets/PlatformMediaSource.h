// /Script/MediaAssets.PlatformMediaSource
// Derives from: UMediaSource > UObject
// size 0x88, declared in Engine/Source/Runtime/MediaAssets/Public/PlatformMediaSource.h

UCLASS(EditInlineNew)
class UPlatformMediaSource : public UMediaSource
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UMediaSource* MediaSource;  // 0x0080, size 0x8
};
