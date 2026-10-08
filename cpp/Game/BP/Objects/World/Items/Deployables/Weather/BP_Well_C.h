// /Game/BP/Objects/World/Items/Deployables/Weather/BP_Well.BP_Well_C
// Derives from: ABP_RainReservior_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Well_C : public ABP_RainReservior_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0748, size 0x8
};
