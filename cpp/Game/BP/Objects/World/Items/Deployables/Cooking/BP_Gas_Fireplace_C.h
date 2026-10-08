// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Gas_Fireplace.BP_Gas_Fireplace_C
// Derives from: ABP_Fireplace_C > ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA10, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Gas_Fireplace_C : public ABP_Fireplace_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HeatHaze_Soft;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Display;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_R;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_L;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_GasFireplace_Flames;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Fireplace_Gas;  // 0x0A08, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Gas_Fireplace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
