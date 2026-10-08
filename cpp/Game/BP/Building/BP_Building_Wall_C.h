// /Game/BP/Building/BP_Building_Wall.BP_Building_Wall_C
// Derives from: ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC60, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Wall_C : public ABP_Building_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0C48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane1;  // 0x0C50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane;  // 0x0C58, size 0x8

    UFUNCTION(BlueprintCallable) void DecideShifting(FRotator RotationToTest_world_, FRotator RotationTestingAgainst_gridspace_, FTransform GridSpaceLOCHitPlaneRot, TSubclassOf<ABP_Building_Base_C> Building_Class, float DistanceBetweenHitAndCenter, FVector RawHitNormal, ACharacter* Player, FTransform& GridSpaceLOCWithGridSpaceRot, TEnumAsByte<RotationalDirections>& RelativeRotationEnum, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtraDelta);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsBuildingOutside();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShouldRotate(TEnumAsByte<RotationalDirections> Direction, FTransform GridSpaceTrans, TSubclassOf<ABP_Building_Base_C> NewBuilding, float HitDistanceFromCenter, FVector Dots, FRotator WorldRotToTest, FRotator GridspaceRotTestAgainst, FVector RawHitNormal, ACharacter* Player, FTransform& Shifted, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtra);  // parameters 0x100
};
