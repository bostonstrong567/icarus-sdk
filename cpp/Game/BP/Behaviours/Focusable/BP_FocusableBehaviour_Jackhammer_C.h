// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_Jackhammer.BP_FocusableBehaviour_Jackhammer_C
// Derives from: UBP_FocusableBehaviour_Chainsaw_C > UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_Jackhammer_C : public UBP_FocusableBehaviour_Chainsaw_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFocusedMontage(TSoftObjectPtr<UAnimMontage>& FPFocused_Montage, TSoftObjectPtr<UAnimMontage>& TPFocused_Montage, TSoftObjectPtr<UAnimMontage>& Item_Focused_Montage);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetIdleAnim(TSoftObjectPtr<UAnimSequence>& OutFPIdleAnim, TSoftObjectPtr<UAnimSequence>& OutTPStandingIdleAnim, TSoftObjectPtr<UAnimSequence>& OutTPCrouchedIdleAnim);  // parameters 0x78
};
