// /Game/BP/Building/BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C
// Derives from: ABP_Building_Beam_C > ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xCF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Beam_Horizontal_C : public ABP_Building_Beam_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CF0, size 0x8

    UFUNCTION(BlueprintCallable) void DecideShifting(FRotator RotationToTest_world_, FRotator RotationTestingAgainst_gridspace_, FTransform GridSpaceLOCHitPlaneRot, TSubclassOf<ABP_Building_Base_C> Building_Class, float DistanceBetweenHitAndCenter, FVector RawHitNormal, ACharacter* Player, FTransform& GridSpaceLOCWithGridSpaceRot, TEnumAsByte<RotationalDirections>& RelativeRotationEnum, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtraDelta);  // parameters 0xE0
    UFUNCTION() void ExecuteUbergraph_BP_Building_Beam_Horizontal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ShouldRotate(TEnumAsByte<RotationalDirections> Direction, FTransform GridSpaceTrans, TSubclassOf<ABP_Building_Base_C> NewBuilding, float HitDistanceFromCenter, FVector Dots, FRotator WorldRotToTest, FRotator GridspaceRotTestAgainst, FVector RawHitNormal, ACharacter* Player, FTransform& Shifted, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtra);  // parameters 0x100
};
