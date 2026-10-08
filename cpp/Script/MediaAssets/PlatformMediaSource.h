// /Script/MediaAssets.PlatformMediaSource
// Derives from: UMediaSource > UObject
// size 0x88, declared in Engine/Source/Runtime/MediaAssets/Public/PlatformMediaSource.h

UCLASS(EditInlineNew)
class UPlatformMediaSource : public UMediaSource
{
public:
    UPROPERTY() UMediaSource* MediaSource;  // 0x0080, size 0x8
};
