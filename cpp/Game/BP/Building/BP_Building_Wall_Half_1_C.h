// /Game/BP/Building/BP_Building_Wall_Half_1.BP_Building_Wall_Half_1_C
// Derives from: ABP_Building_Wall_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC68, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Wall_Half_1_C : public ABP_Building_Wall_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* RailingSnap;  // 0x0C60, size 0x8

    UFUNCTION(BlueprintCallable) void GetBlockingBypass(TSubclassOf<ABP_Building_Base_C> BuildingClass, TArray<FVectorPair>& BlockingPreRotate, FTransform GridSpaceTransform, TArray<FVectorPair>& BypassBlocking);  // parameters 0x60
};
