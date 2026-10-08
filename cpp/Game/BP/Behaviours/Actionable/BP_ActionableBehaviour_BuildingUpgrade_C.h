// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C
// Derives from: UBP_ActionableBehaviour_Radial_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_BuildingUpgrade_C : public UBP_ActionableBehaviour_Radial_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBuildingResourceType> SelectedResource;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle UnobtainableModifier;  // 0x0338, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetHitFromViewTraces(FHitResult& OutHit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void MenuItemSelected(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlaySwing(AIcarusPlayerCharacterSurvival* TargetPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast) void PlaySwingAnimation(AIcarusPlayerCharacterSurvival* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void ReplaceBuilding(ABP_Building_Base_C* BuildingToReplace, TEnumAsByte<EBuildingResourceType> ResourceType);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void SwapBuilding(ABP_Building_Base_C* HitBuilding, TEnumAsByte<EBuildingResourceType> ReplaceMentResrouce);  // parameters 0x9
};
