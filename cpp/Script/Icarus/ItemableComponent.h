// /Script/Icarus.ItemableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xD8, declared in Icarus/Source/Icarus/Traits/ItemableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UItemableComponent : public UTraitComponent
{
public:
    UPROPERTY(BlueprintAssignable) FWorldPickupSignature OnWorldPickup;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Stack;  // 0x00D4, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetItemableData(FItemableData& OutData) const;  // parameters 0xF9
    UFUNCTION(BlueprintCallable) void SetStack(int32 NewStack);  // parameters 0x4
};
