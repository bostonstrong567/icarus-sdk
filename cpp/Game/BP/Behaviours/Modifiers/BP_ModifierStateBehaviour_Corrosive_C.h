// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_Corrosive.BP_ModifierStateBehaviour_Corrosive_C
// Derives from: UBP_ModifierStateBehaviour_TickDamage_C > UModifierStateComponent > UActorComponent > UObject
// size 0x408, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_Corrosive_C : public UBP_ModifierStateBehaviour_TickDamage_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInventoryIDEnum> AffectedInventoryTypes;  // 0x03F8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_Corrosive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
