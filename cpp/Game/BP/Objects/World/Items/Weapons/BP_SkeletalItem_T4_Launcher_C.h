// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_T4_Launcher.BP_SkeletalItem_T4_Launcher_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_T4_Launcher_C : public ASkeletalItem, public IIFireTransformProvider_C
{
public:
    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
};
