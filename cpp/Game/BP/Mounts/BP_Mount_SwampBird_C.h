// /Game/BP/Mounts/BP_Mount_SwampBird.BP_Mount_SwampBird_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF48, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_SwampBird_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0F38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0F40, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
};
