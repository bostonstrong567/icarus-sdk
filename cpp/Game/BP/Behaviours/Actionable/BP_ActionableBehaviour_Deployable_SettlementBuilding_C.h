// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Deployable_SettlementBuilding.BP_ActionableBehaviour_Deployable_SettlementBuilding_C
// Derives from: UBP_ActionableBehaviour_DeployableBase_C > UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xC80, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Deployable_SettlementBuilding_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C70, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_SettlementBuilding_VariantInfo_C* AdditionalInfoWidget;  // 0x0C78, size 0x8

    UFUNCTION(BlueprintCallable) void CheckValidPlacement(FHitResult InHit, bool& IsValidPlacement, FText& InvalidReason);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Deployable_SettlementBuilding(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetContextMenuInfo(FText& MenuName, TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPreviewActorOverlappingComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool GetSettlementBuildingRow(int32 CustomIndex, FSettlementBuildingsRowHandle& BuildingRow, FDeployableSetupRowHandle& DeployableVariant);  // parameters 0x35
    UFUNCTION(BlueprintCallable) void OnContextMenuSegmentHighlightChanged(UUMG_ContextMenu_Radial_Item_C* Segment);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldConsume(bool& bConsume);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMeshPreview(FHitResult Hit, bool DidHit);  // parameters 0x89
};
