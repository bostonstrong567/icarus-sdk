// /Script/MagicLeapARPin.MagicLeapARPinRenderer
// Derives from: AActor > UObject
// size 0x288, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/Debug/MagicLeapARPinRenderer.h

UCLASS(Config=Engine)
class AMagicLeapARPinRenderer : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInfoActorsVisibilityOverride;  // 0x0220, size 0x1
    UPROPERTY() TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors;  // 0x0228, size 0x50
    UPROPERTY() TSubclassOf<AMagicLeapARPinInfoActorBase> ClassToSpawn;  // 0x0280, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FDelegateHandle DelegateHandle;  // 0x0278, private

    UFUNCTION(BlueprintCallable) void SetVisibilityOverride(bool InVisibilityOverride);  // parameters 0x1
};
