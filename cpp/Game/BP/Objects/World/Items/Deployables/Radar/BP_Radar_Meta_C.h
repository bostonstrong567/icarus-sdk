// /Game/BP/Objects/World/Items/Deployables/Radar/BP_Radar_Meta.BP_Radar_Meta_C
// Derives from: ABP_Radarv3_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radar_Meta_C : public ABP_Radarv3_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DEP_Radar_03;  // 0x07E0, size 0x8
};
