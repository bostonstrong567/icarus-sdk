// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_NPC_Deployable.BP_Dead_NPC_Deployable_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_NPC_Deployable_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Dirt;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood;  // 0x0758, size 0x8

    UFUNCTION(BlueprintCallable) void PlayInterractAudio();
    UFUNCTION(BlueprintCallable) void PlayStopInterractAudio();
};
