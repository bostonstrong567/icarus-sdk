// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_FocusableArmour.BP_FocusableBehaviour_FocusableArmour_C
// Derives from: UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_FocusableArmour_C : public UBP_FocusableBehaviour_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FocusedArmourSlot;  // 0x030C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnFocused();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnUnfocused();
};
