// /Game/BP/Behaviours/Modifiers/BP_Modifier_Fertilize.BP_Modifier_Fertilize_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3DC, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Fertilize_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugRender;  // 0x03D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FoodCost;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WaterCost;  // 0x03D8, size 0x4

    UFUNCTION(BlueprintCallable) void AttemptFertilization(bool& Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Fertilize(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FertilizationCost();
    UFUNCTION(BlueprintCallable) void FertilizationCostCheck(bool& CanFertilize);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayEffects(FVector ParticleLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TryFertilizeCreature(bool& Fertilized);  // parameters 0x1
};
