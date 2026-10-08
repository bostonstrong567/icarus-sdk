// /Game/BP/Behaviours/Modifiers/BP_Modifier_Drink.BP_Modifier_Drink_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Drink_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Drink(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
