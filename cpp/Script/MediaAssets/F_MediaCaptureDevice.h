// /Script/MediaAssets.MediaCaptureDevice
// size 0x28, declared in Engine/Source/Runtime/MediaAssets/Public/Misc/MediaBlueprintFunctionLibrary.h

USTRUCT()
struct FMediaCaptureDevice
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) FText DisplayName;  // 0x0000, size 0x18
    UPROPERTY(Transient, BlueprintReadOnly) FString Url;  // 0x0018, size 0x10
};
