// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Ape_Experiment_02.BP_Ape_Experiment_02_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Experiment_02_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_0;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0348, size 0x10

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
};
