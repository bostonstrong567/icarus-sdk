// /Game/BP/Behaviours/Modifiers/BP_Modifier_Modify_Effectiveness_InverseHealth.BP_Modifier_Modify_Effectiveness_InverseHealth_C
// Derives from: UBP_Modifier_Modify_Effectiveness_C > UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Modify_Effectiveness_InverseHealth_C : public UBP_Modifier_Modify_Effectiveness_C
{
public:
    UFUNCTION(BlueprintCallable) void CalculateEffectiveness(int32& Effectiveness);  // parameters 0x4
};
