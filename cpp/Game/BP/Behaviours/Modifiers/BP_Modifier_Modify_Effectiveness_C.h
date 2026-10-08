// /Game/BP/Behaviours/Modifiers/BP_Modifier_Modify_Effectiveness.BP_Modifier_Modify_Effectiveness_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Modify_Effectiveness_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION(BlueprintCallable) void CalculateEffectiveness(int32& Effectiveness);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Modify_Effectiveness(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
