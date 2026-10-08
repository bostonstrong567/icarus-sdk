// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Scorpion_Boss_Trophy_Chair.BP_Scorpion_Boss_Trophy_Chair_C
// Derives from: ABP_ChairBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Scorpion_Boss_Trophy_Chair_C : public ABP_ChairBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0798, size 0x8
};
