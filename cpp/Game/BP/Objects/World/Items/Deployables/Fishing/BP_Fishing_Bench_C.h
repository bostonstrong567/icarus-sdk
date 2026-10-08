// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Fishing_Bench.BP_Fishing_Bench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9A9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fishing_Bench_C : public ABP_ProcessorBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AlterationProcessingAudio;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0990, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemAlteredSound;  // 0x0998, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemUnalteredSound;  // 0x09A0, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasFillettingStation;  // 0x09A8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Fishing_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void OnRegisteredWithPrebuiltStructure(APrebuiltStructure* Prebuilt);  // parameters 0x8
};
