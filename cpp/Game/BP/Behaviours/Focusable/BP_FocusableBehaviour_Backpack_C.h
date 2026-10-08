// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C
// Derives from: UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x320, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_Backpack_C : public UBP_FocusableBehaviour_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* BackpackItem;  // 0x0318, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FocusableBehaviour_Backpack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindBackpackItem(ACharacter* TargetCharacter, AIcarusItem*& BackpackItem);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HideBackpackMesh();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnFocused();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnUnfocused();
};
