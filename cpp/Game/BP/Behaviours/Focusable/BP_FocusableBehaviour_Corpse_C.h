// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_Corpse.BP_FocusableBehaviour_Corpse_C
// Derives from: UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_Corpse_C : public UBP_FocusableBehaviour_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GOAP_Corpse_C* CorpseRef;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* OwningItemRef;  // 0x0320, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FocusableBehaviour_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnFocused();
};
