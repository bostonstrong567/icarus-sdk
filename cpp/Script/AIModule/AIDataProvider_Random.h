// /Script/AIModule.AIDataProvider_Random
// Derives from: UAIDataProvider_QueryParams > UAIDataProvider > UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/DataProviders/AIDataProvider_Random.h

UCLASS(EditInlineNew)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) float Min;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float Max;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) uint8 bInteger : 1;  // 0x0048, mask 0x01
};
