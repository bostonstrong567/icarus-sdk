// /Game/BP/Behaviours/Modifiers/BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_LavaHunter_FlameOn_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitComponent();
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDamagedReturned(int32 ReturnedAmount, AActor* ActorReceivingDamage);  // parameters 0x10
};
