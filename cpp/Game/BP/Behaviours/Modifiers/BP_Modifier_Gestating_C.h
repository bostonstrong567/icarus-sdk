// /Game/BP/Behaviours/Modifiers/BP_Modifier_Gestating.BP_Modifier_Gestating_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x420, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Gestating_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Juvenile_Creature_Type;  // 0x03D0, size 0x18, named "Juvenile Creature Type"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 GestationPeriodSeconds;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaOverflow;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GestationMultiplier;  // 0x03F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTamesRowHandle JuvenileTameData;  // 0x03F4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedJuveniles;  // 0x0410, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Gestating(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GestationComplete();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnJuvenile();
};
