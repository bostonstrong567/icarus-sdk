// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Deployable_VesperCage.BP_ActionableBehaviour_Deployable_VesperCage_C
// Derives from: UBP_ActionableBehaviour_DeployableBase_C > UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Deployable_VesperCage_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:

    UFUNCTION(BlueprintCallable) void CheckValidPlacement(FHitResult InHit, bool& IsValidPlacement, FText& InvalidReason);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void GetPreviewMeshPlacement(FVector AttemptedPlacePosition, FVector PlacePositionNormal, AActor* HitFloorActor, FTransform& OutPreviewTransform, FName& OutSnapSocket, AActor*& OutSnapActor, bool& OutActorSnapValid);  // parameters 0x61
    UFUNCTION(BlueprintCallable) void HandleInvalidPlacementText(bool InvalidPlacement, FText InvalidReason);  // parameters 0x20
};
