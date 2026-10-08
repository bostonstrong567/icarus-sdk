// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_Fishing.BP_FocusableBehaviour_Fishing_C
// Derives from: UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x320, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_Fishing_C : public UBP_FocusableBehaviour_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* FishingItem;  // 0x0318, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FocusableBehaviour_Fishing(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusChangePanini();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TryAttachToOwner(AIcarusItem* ItemActor, AActor* Invoking_Actor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdatePanini(AIcarusItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateProjection(bool NewParam);  // parameters 0x1
};
