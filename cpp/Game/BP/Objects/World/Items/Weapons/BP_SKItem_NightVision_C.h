// /Game/BP/Objects/World/Items/Weapons/BP_SKItem_NightVision.BP_SKItem_NightVision_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SKItem_NightVision_C : public ASkeletalItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0580, size 0x8
};
