// /Game/BP/Behaviours/Modifiers/BP_Modifier_Swimming.BP_Modifier_Swimming_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Swimming_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_Swimming(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
