// /Game/BP/AI/Basic/Drone/BTD_CheckDroneState.BTD_CheckDroneState_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckDroneState_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DroneState>> DesiredStates;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentStateKey;  // 0x00B0, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
