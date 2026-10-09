// /Script/MagicLeapARPin.MagicLeapARPinRenderer
// Derives from: AActor > UObject
// size 0x288, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/Debug/MagicLeapARPinRenderer.h

UCLASS(Config=Engine)
class AMagicLeapARPinRenderer : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInfoActorsVisibilityOverride;  // 0x0220, size 0x1
private:
    UPROPERTY() TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors;  // 0x0228, size 0x50
    FDelegateHandle DelegateHandle;  // 0x0278, not reflected
    UPROPERTY() TSubclassOf<AMagicLeapARPinInfoActorBase> ClassToSpawn;  // 0x0280, size 0x8
public:
    UFUNCTION(BlueprintCallable) void SetVisibilityOverride(bool InVisibilityOverride);  // parameters 0x1
};
