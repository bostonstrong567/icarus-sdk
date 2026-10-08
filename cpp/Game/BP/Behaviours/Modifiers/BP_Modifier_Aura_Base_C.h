// /Game/BP/Behaviours/Modifiers/BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Aura_Base_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugRender;  // 0x03D0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Aura_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
