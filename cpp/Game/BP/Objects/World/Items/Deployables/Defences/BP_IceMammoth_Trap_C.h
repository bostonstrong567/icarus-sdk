// /Game/BP/Objects/World/Items/Deployables/Defences/BP_IceMammoth_Trap.BP_IceMammoth_Trap_C
// Derives from: ABP_Snare_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IceMammoth_Trap_C : public ABP_Snare_Trap_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem_Blood;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_HitFX;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight4;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight3;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight2;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight1;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight4;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights4;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight3;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights3;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight2;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights2;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights1;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x07C0, size 0x8

    UFUNCTION(BlueprintCallable) void ApplyModifiers(AActor* Defender);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_IceMammoth_Trap(int32 EntryPoint);  // parameters 0x4
};
