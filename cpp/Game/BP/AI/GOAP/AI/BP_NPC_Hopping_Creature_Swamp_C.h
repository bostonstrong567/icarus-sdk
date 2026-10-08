// /Game/BP/AI/GOAP/AI/BP_NPC_Hopping_Creature_Swamp.BP_NPC_Hopping_Creature_Swamp_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCC0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Hopping_Creature_Swamp_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CB8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
};
