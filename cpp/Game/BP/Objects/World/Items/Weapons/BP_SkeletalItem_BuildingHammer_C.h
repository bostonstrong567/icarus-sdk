// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_BuildingHammer.BP_SkeletalItem_BuildingHammer_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_BuildingHammer_C : public ASkeletalItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Building_C* BP_UIProjectionComponent_Building;  // 0x0580, size 0x8

    UFUNCTION(BlueprintCallable) EViewTraceResultPriority BP_SkeletalItem_BuildingHammer_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
};
