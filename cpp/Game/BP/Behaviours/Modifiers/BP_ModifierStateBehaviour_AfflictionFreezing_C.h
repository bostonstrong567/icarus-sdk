// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C
// Derives from: UBP_ModifierStateBehaviour_AfflictionCold_C > UBP_Modifier_TemperatureClear_C > UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x418, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_AfflictionFreezing_C : public UBP_ModifierStateBehaviour_AfflictionCold_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FrostbiteTimer;  // 0x0410, size 0x8

    UFUNCTION(BlueprintCallable) void DealDamage();
    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateBlend();
};
