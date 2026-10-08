// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Molotov.BP_Payload_Molotov_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Molotov_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY() float Timeline_PanSpeed_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x0408, size 0x4
    UPROPERTY() float Timeline_NoiseMaskClampLow_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x040C, size 0x4
    UPROPERTY() float Timeline_MaskDensity_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x0410, size 0x4
    UPROPERTY() float Timeline_BaseColorMultiplier_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x0414, size 0x4
    UPROPERTY() float Timeline_EmissiveMultiplier_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x0418, size 0x4
    UPROPERTY() float Timeline_ScorchOpacityPower_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x041C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline__Direction_9B5E185344E99D1E58BDA1B5ADD3D0F3;  // 0x0420, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BurnRadius;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageMultiplier;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterRadius;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NiagaraEmitter;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusCharacter*> HitCharacters;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance FMODEvent;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UDecalComponent* DecalAttached;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsSubmerged;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable) void CheckIfSubmerged();
    UFUNCTION() void ExecuteUbergraph_BP_Payload_Molotov(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION() void Timeline__FinishedFunc();
    UFUNCTION() void Timeline__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TryIgnite();
    UFUNCTION(BlueprintCallable) void VFXTimeline();
};
