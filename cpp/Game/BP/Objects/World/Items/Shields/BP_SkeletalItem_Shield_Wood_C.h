// /Game/BP/Objects/World/Items/Shields/BP_SkeletalItem_Shield_Wood.BP_SkeletalItem_Shield_Wood_C
// Derives from: ABP_SkeletalItem_Shield_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Shield_Wood_C : public ABP_SkeletalItem_Shield_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x05A0, size 0x8
};
