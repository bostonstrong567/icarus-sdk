// /Game/BP/Objects/World/Items/Deployables/Farming/BP_Seed_Extractor.BP_Seed_Extractor_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x990, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seed_Extractor_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Particle;  // 0x0988, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Seed_Extractor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StateUpdated(bool bIsActive);  // parameters 0x1
};
