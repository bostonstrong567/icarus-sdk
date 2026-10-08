// /Game/BP/Objects/World/Resources/Meta/BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C
// Derives from: ABP_MetaDeposit_C > ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x3B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MetaDeposit_Arctic_C : public ABP_MetaDeposit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_MetaLoop;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* OverlayDecal;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_MetaGroundRays;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x0398, size 0x8
    UPROPERTY() float Timeline_FadeOut_MaterialIntensity_3DACA88A4BA29A7A439FDD849EDCB5C6;  // 0x03A0, size 0x4
    UPROPERTY() float Timeline_FadeOut_Intensity_3DACA88A4BA29A7A439FDD849EDCB5C6;  // 0x03A4, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_FadeOut__Direction_3DACA88A4BA29A7A439FDD849EDCB5C6;  // 0x03A8, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_FadeOut;  // 0x03B0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_MetaDeposit_Arctic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResourceEmptied();
    UFUNCTION() void Timeline_FadeOut__FinishedFunc();
    UFUNCTION() void Timeline_FadeOut__UpdateFunc();
};
