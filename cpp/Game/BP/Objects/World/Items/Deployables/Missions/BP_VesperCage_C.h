// /Game/BP/Objects/World/Items/Deployables/Missions/BP_VesperCage.BP_VesperCage_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x759, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_VesperCage_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trap_Small_T4;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Start;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* End;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bTriggerRelease;  // 0x0750, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Flighttime;  // 0x0754, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bCanRelease;  // 0x0758, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_VesperCage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InfectVesper();
    UFUNCTION(BlueprintCallable) void OnRep_bTriggerRelease();
    UFUNCTION(BlueprintCallable) void ReleaseEvents();
    UFUNCTION(BlueprintCallable) void ReleaseVesper();
};
