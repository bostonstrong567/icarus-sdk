// /Game/BP/Objects/World/Resources/Meta/BP_MetaDeposit_Uranium_Node.BP_MetaDeposit_Uranium_Node_C
// Derives from: ABP_MetaDeposit_C > ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x410, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MetaDeposit_Uranium_Node_C : public ABP_MetaDeposit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_09;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_010;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_03;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_02;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_08;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_07;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_06;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_05;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_04;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SnapPoint;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_MetaLoop;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaExotic_Uranium_Node_01;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x03E0, size 0x8
    UPROPERTY() float Timeline_FadeOut_EmissiveIntensity_3C3235C94E330A9F1B4C37AE2F2C646D;  // 0x03E8, size 0x4
    UPROPERTY() float Timeline_FadeOut_MaterialIntensity_3C3235C94E330A9F1B4C37AE2F2C646D;  // 0x03EC, size 0x4
    UPROPERTY() float Timeline_FadeOut_Intensity_3C3235C94E330A9F1B4C37AE2F2C646D;  // 0x03F0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_FadeOut__Direction_3C3235C94E330A9F1B4C37AE2F2C646D;  // 0x03F4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_FadeOut;  // 0x03F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_MetaDeposit_Uranium_C*> GlowingCrystals;  // 0x0400, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_MetaDeposit_Uranium_Node(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void ResourceEmptied();
    UFUNCTION(BlueprintCallable) void SetCrystalsState(bool bGlow);  // parameters 0x1
    UFUNCTION() void Timeline_FadeOut__FinishedFunc();
    UFUNCTION() void Timeline_FadeOut__UpdateFunc();
};
