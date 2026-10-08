// /Game/BP/Objects/World/Resources/Meta/BP_MetaDeposit_Uranium.BP_MetaDeposit_Uranium_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x331, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MetaDeposit_Uranium_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* UraniumAudioLoop;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Meta_Uranium;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Meta_Uranium_Ground;  // 0x02F8, size 0x8
    UPROPERTY() float Timeline_0_EmissiveIntensity_C1704B9D44FDCD9CFEE96FBC1342D88C;  // 0x0300, size 0x4
    UPROPERTY() float Timeline_0_MaterialIntensity_C1704B9D44FDCD9CFEE96FBC1342D88C;  // 0x0304, size 0x4
    UPROPERTY() float Timeline_0_Intensity_C1704B9D44FDCD9CFEE96FBC1342D88C;  // 0x0308, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_C1704B9D44FDCD9CFEE96FBC1342D88C;  // 0x030C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0310, size 0x8
    UPROPERTY() float Timeline_FadeOut_EmissiveIntensity_56A62B554EAA251B1D80D48436264B4D;  // 0x0318, size 0x4
    UPROPERTY() float Timeline_FadeOut_MaterialIntensity_56A62B554EAA251B1D80D48436264B4D;  // 0x031C, size 0x4
    UPROPERTY() float Timeline_FadeOut_Intensity_56A62B554EAA251B1D80D48436264B4D;  // 0x0320, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_FadeOut__Direction_56A62B554EAA251B1D80D48436264B4D;  // 0x0324, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_FadeOut;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bGlowEnabled;  // 0x0330, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_MetaDeposit_Uranium(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bGlowEnabled();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetGlowEnabled(bool bGlowEnabled);  // parameters 0x1
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION() void Timeline_FadeOut__FinishedFunc();
    UFUNCTION() void Timeline_FadeOut__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TriggerFadeIn();
    UFUNCTION(BlueprintCallable) void TriggerFadeOut();
    UFUNCTION(BlueprintCallable) void UpdateGlow();
    UFUNCTION(BlueprintCallable) void UpdateHighlightable(bool Active);  // parameters 0x1
};
