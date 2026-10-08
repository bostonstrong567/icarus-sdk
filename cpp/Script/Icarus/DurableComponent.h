// /Script/Icarus.DurableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD8, declared in Icarus/Source/Icarus/Traits/DurableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UDurableComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Durability;  // 0x00D0, size 0x4
    UPROPERTY(BlueprintAssignable) FActorBroken OnActorBroken;  // 0x00D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSkipBroadcastBrokenSteps;  // 0x00D5, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool Initialised;  // 0x00D6, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDurableData(FDurableData& OutData) const;  // parameters 0x41
    UFUNCTION(BlueprintCallable) void InitialiseComponent(int32 DurabilityValue);  // parameters 0x4
    UFUNCTION() void OnHealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetDurability(int32 NewDurability);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSkipBrokenDelegateSteps(bool bSkip);  // parameters 0x1
};
