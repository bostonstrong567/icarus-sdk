// /Game/BP/Objects/World/Resources/Nodes/BP_BerryBush.BP_BerryBush_C
// Derives from: ABP_ResourceNodeBase_C > AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x438, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BerryBush_C : public ABP_ResourceNodeBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PerceptionTarget;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UAnimInstance*, UAnimMontage*> PendingAnimations;  // 0x03E8, size 0x50

    UFUNCTION() void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
    UFUNCTION() void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
    UFUNCTION() void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_2_GOAPInteractionCompleteSignature__DelegateSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_BerryBush(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_AbortMontage(AIcarusNPCGOAPCharacter* Character, TSoftObjectPtr<UAnimMontage> Montage);  // parameters 0x30
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayMontage(ABP_IcarusNPCGOAPCharacter_C* Character, TSoftObjectPtr<UAnimMontage> Montage, FName MontageSection);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnBlendOut_15B36D3C434B95EB3872FB8EDAED70B9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_15B36D3C434B95EB3872FB8EDAED70B9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_15B36D3C434B95EB3872FB8EDAED70B9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_35D8DF264EE323267AA6EA8C06002441(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_C61AA06843904A6595D627BFC74135C5(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMontageComplete(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_15B36D3C434B95EB3872FB8EDAED70B9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_15B36D3C434B95EB3872FB8EDAED70B9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
