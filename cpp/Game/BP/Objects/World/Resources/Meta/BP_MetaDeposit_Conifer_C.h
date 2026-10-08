// /Game/BP/Objects/World/Resources/Meta/BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C
// Derives from: ABP_MetaDeposit_C > ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x3F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MetaDeposit_Conifer_C : public ABP_MetaDeposit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_MetaLoop;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaGroundRays;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_08;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_07;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_06;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_05;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_04;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_03;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_02;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_01;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x03D0, size 0x8
    UPROPERTY() float Timeline_FadeOut_MaterialIntensity_DD7B1724447D1AD3197974861B05360D;  // 0x03D8, size 0x4
    UPROPERTY() float Timeline_FadeOut_Intensity_DD7B1724447D1AD3197974861B05360D;  // 0x03DC, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_FadeOut__Direction_DD7B1724447D1AD3197974861B05360D;  // 0x03E0, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_FadeOut;  // 0x03E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_MetaDeposit_Conifer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResourceEmptied();
    UFUNCTION() void Timeline_FadeOut__FinishedFunc();
    UFUNCTION() void Timeline_FadeOut__UpdateFunc();
};
