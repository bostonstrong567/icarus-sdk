// /Game/BP/Objects/World/Resources/Meta/BP_MetaDeposit_Desert.BP_MetaDeposit_Desert_C
// Derives from: ABP_MetaDeposit_C > ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x428, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MetaDeposit_Desert_C : public ABP_MetaDeposit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_MetaLoop;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* OverlayDecal;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaGroundRays;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_14;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_13;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_12;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_11;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_10;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_09;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_01;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_07;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_06;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_05;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_04;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_03;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_02;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_08;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x0408, size 0x8
    UPROPERTY() float Timeline_FadeOut_MaterialIntensity_D12C39604B3EF0B61C8B31BE8F1ECEBE;  // 0x0410, size 0x4
    UPROPERTY() float Timeline_FadeOut_Intensity_D12C39604B3EF0B61C8B31BE8F1ECEBE;  // 0x0414, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_FadeOut__Direction_D12C39604B3EF0B61C8B31BE8F1ECEBE;  // 0x0418, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_FadeOut;  // 0x0420, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_MetaDeposit_Desert(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResourceEmptied();
    UFUNCTION() void Timeline_FadeOut__FinishedFunc();
    UFUNCTION() void Timeline_FadeOut__UpdateFunc();
};
