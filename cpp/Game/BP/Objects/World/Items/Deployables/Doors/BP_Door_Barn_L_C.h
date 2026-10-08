// /Game/BP/Objects/World/Items/Deployables/Doors/BP_Door_Barn_L.BP_Door_Barn_L_C
// Derives from: ABP_Door_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x770, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Door_Barn_L_C : public ABP_Door_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* ShadowMesh;  // 0x0768, size 0x8
};
