// /Game/BP/Objects/World/Items/Deployables/Farming/BP_Electric_Seed_Extractor.BP_Electric_Seed_Extractor_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Electric_Seed_Extractor_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioLoop;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_Seed_Low;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_Seed_Full;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_Seed;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Particle;  // 0x09E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Electric_Seed_Extractor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
