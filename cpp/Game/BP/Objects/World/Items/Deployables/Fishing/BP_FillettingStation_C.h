// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_FillettingStation.BP_FillettingStation_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FillettingStation_C : public ABP_ProcessorBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AlterationProcessingAudio;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0990, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemAlteredSound;  // 0x0998, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemUnalteredSound;  // 0x09A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FillettingStation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
};
