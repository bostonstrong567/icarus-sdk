// /Game/BP/Behaviours/Modifiers/BP_Modifier_Brambles.BP_Modifier_Brambles_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x434, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Brambles_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x03D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<AActor*> BramblesInRange;  // 0x03E0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDistance;  // 0x0430, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Brambles(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
