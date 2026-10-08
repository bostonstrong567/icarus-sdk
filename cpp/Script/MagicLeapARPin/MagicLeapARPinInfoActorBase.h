// /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
// Derives from: AActor > UObject
// size 0x238, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/Debug/MagicLeapARPinInfoActorBase.h

UCLASS(Abstract, Config=Engine)
class AMagicLeapARPinInfoActorBase : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid PinID;  // 0x0220, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bVisibilityOverride;  // 0x0230, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnUpdateARPinState();
};
