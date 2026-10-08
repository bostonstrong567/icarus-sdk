// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_FocusableArmour_GolemGauntlet.BP_FocusableBehaviour_FocusableArmour_GolemGauntlet_C
// Derives from: UBP_FocusableBehaviour_FocusableArmour_C > UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_FocusableArmour_GolemGauntlet_C : public UBP_FocusableBehaviour_FocusableArmour_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* Item_Actor;  // 0x0318, size 0x8, named "Item Actor"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Invoking_Actor;  // 0x0320, size 0x8, named "Invoking Actor"

    UFUNCTION() void ExecuteUbergraph_BP_FocusableBehaviour_FocusableArmour_GolemGauntlet(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RetryAttachment();
    UFUNCTION(BlueprintCallable) void TryAttachToOwner(AIcarusItem* ItemActor, AActor* Invoking_Actor);  // parameters 0x10
};
