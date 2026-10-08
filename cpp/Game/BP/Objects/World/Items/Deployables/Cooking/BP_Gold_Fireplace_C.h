// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Gold_Fireplace.BP_Gold_Fireplace_C
// Derives from: ABP_Fireplace_C > ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Gold_Fireplace_C : public ABP_Fireplace_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Fireplace_FX;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Fireplace_WoodLogs;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DCO_Fireplace_ArtDeco_Railing;  // 0x09E8, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
