// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C
// Derives from: UBP_ActionableBehaviour_Radial_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Building_C : public UBP_ActionableBehaviour_Radial_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ReloadTimer;  // 0x0330, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Building(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void MenuItemSelected(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuSegmentHighlightChanged(UUMG_ContextMenu_Radial_Item_C* Segment);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OpenRadialMenu();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void ReloadHeld();
};
