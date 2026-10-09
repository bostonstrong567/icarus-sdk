// /Script/AudioCapture.AudioCaptureFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/AudioCapture/Source/AudioCapture/Public/AudioCapture.h

UCLASS()
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UAudioCapture* CreateAudioCapture();  // parameters 0x8
};
