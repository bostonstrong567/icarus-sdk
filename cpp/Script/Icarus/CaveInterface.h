// /Script/Icarus.CaveInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/World/Cave.h

UCLASS(Abstract, MinimalAPI)
class UCaveInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) float GetCurrentSpelunkingDepth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) float GetSpelunkingDepthFromLocation(FVector Location) const;  // parameters 0x10
};
