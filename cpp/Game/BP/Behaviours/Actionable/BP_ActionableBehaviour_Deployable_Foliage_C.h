// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Deployable_Foliage.BP_ActionableBehaviour_Deployable_Foliage_C
// Derives from: UBP_ActionableBehaviour_DeployableBase_C > UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xC78, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Deployable_Foliage_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFLODRecord* PlacementRecord;  // 0x0C70, size 0x8

    UFUNCTION(BlueprintCallable) void CheckValidPlacement(FHitResult InHit, bool& IsValidPlacement, FText& InvalidReason);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void GetPreviewStaticMeshAsset(int32 PreviewVariantIndex, TSoftObjectPtr<UStaticMesh>& StaticMeshAsset);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnDeploy(ADeployable* SpawnedDeployable);  // parameters 0x8
};
