// /Game/BP/Objects/World/Items/Deployables/Missions/BP_PrebuiltSpawnLocation.BP_PrebuiltSpawnLocation_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PrebuiltSpawnLocation_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube1;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SpawnedAI;  // 0x0748, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_PrebuiltSpawnLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) AActor* SpawnAI(const FAISetupRowHandle& AISetup, int32 BaseLevel);  // parameters 0x28
};
