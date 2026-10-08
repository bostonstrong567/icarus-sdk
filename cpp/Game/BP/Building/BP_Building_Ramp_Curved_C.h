// /Game/BP/Building/BP_Building_Ramp_Curved.BP_Building_Ramp_Curved_C
// Derives from: ABP_Building_Ramp_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Ramp_Curved_C : public ABP_Building_Ramp_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_Environmental_Buildup_Skeletal_C* BPC_Environmental_Buildup_Skeletal;  // 0x0C68, size 0x8

    UFUNCTION(BlueprintCallable) void ShouldRotate(TEnumAsByte<RotationalDirections> Direction, FTransform GridSpaceTrans, TSubclassOf<ABP_Building_Base_C> NewBuilding, float HitDistanceFromCenter, FVector Dots, FRotator WorldRotToTest, FRotator GridspaceRotTestAgainst, FVector RawHitNormal, ACharacter* Player, FTransform& Shifted, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtra);  // parameters 0x100
};
