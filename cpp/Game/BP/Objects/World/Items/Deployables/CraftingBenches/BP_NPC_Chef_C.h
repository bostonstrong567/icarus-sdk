// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_NPC_Chef.BP_NPC_Chef_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_NPC_Chef_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Campfire_Wood_Full_v2;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Campfire_FX;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Campfire_Stones;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0998, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
