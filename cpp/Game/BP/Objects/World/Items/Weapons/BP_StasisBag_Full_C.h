// /Game/BP/Objects/World/Items/Weapons/BP_StasisBag_Full.BP_StasisBag_Full_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StasisBag_Full_C : public ASkeletalItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0580, size 0x8
};
