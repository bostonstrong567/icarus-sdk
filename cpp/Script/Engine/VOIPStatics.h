// /Script/Engine.VOIPStatics
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/Net/VoiceConfig.h

UCLASS()
class UVOIPStatics : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void SetMicThreshold(float InThreshold);  // parameters 0x4
};
