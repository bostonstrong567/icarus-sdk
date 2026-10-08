// /Game/BP/Mounts/BP_Mount_Wooly_Zebra.BP_Mount_Wooly_Zebra_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF40, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_Wooly_Zebra_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0F38, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
};
