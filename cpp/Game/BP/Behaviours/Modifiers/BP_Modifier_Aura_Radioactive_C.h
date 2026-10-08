// /Game/BP/Behaviours/Modifiers/BP_Modifier_Aura_Radioactive.BP_Modifier_Aura_Radioactive_C
// Derives from: UBP_Modifier_Aura_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3EC, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Aura_Radioactive_C : public UBP_Modifier_Aura_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* RadiationEffectActor;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 EffectSize;  // 0x03E8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Aura_Radioactive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_EffectSize();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateRadiationSphere();
};
