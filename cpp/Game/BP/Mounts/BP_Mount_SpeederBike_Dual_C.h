// /Game/BP/Mounts/BP_Mount_SpeederBike_Dual.BP_Mount_SpeederBike_Dual_C
// Derives from: ABP_Mount_SpeederBike_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x1038, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_SpeederBike_Dual_C : public ABP_Mount_SpeederBike_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight4;  // 0x1020, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight3;  // 0x1028, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget_Passenger;  // 0x1030, size 0x8

    UFUNCTION(BlueprintCallable) void CheckForTwoPlayerRidingAccolade();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
};
