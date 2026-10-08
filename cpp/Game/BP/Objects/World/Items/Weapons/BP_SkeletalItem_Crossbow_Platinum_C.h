// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Crossbow_Platinum.BP_SkeletalItem_Crossbow_Platinum_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Crossbow_Platinum_C : public ASkeletalItem, public IIFireTransformProvider_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_C* FirearmBehaviour;  // 0x0580, size 0x8

    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
};
