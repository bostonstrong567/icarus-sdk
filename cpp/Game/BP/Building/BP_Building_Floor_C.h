// /Game/BP/Building/BP_Building_Floor.BP_Building_Floor_C
// Derives from: ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC68, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Floor_C : public ABP_Building_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildup_C* BPC_EnvironmentalBuildup;  // 0x0C48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_spreadableFire_floor;  // 0x0C50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane1;  // 0x0C58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_XPlane;  // 0x0C60, size 0x8

    UFUNCTION(BlueprintCallable) void ShouldRotate(TEnumAsByte<RotationalDirections> Direction, FTransform GridSpaceTrans, TSubclassOf<ABP_Building_Base_C> NewBuilding, float HitDistanceFromCenter, FVector Dots, FRotator WorldRotToTest, FRotator GridspaceRotTestAgainst, FVector RawHitNormal, ACharacter* Player, FTransform& Shifted, bool& WantsBlockLikePlacement, FTransform& BlockLikePlacementExtra);  // parameters 0x100
};
