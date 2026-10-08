// /Game/BP/AI/GOAP/AI/BP_NPC_Hopping_Creature.BP_NPC_Hopping_Creature_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCC8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Hopping_Creature_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Hopping_Creature(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
};
