// /Script/MediaAssets.MediaBlueprintFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/MediaAssets/Public/Misc/MediaBlueprintFunctionLibrary.h

UCLASS()
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);  // parameters 0x14
};
