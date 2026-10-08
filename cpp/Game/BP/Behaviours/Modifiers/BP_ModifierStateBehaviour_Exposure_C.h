// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_Exposure_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x03D0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetModifierExponentialDamage(float& Scaled_Effectiveness);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitComponent();
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
