// /Game/BP/Objects/World/Items/Deployables/Notes/BP_Terminal.BP_Terminal_C
// Derives from: ABP_Note_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Terminal_C : public ABP_Note_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* LaptopAudio;  // 0x0740, size 0x8
};
