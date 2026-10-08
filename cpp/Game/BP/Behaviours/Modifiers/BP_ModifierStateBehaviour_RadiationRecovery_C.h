// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_RadiationRecovery.BP_ModifierStateBehaviour_RadiationRecovery_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3DC, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_RadiationRecovery_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseRadiationReduction;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Accumulation;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Temp;  // 0x03D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_RadiationRecovery(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
