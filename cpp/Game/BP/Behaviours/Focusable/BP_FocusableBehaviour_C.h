// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour.BP_FocusableBehaviour_C
// Derives from: UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x30C, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_C : public UFocusableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredFocusableAnims;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Attached;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* FPShadowMesh;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsThirdPerson;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPlayingFocusAnimation;  // 0x02F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChargingItemModifierID;  // 0x0308, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_FocusableBehaviour(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FItemAnimationData GetAnimationData();  // parameters 0x360
    UFUNCTION(BlueprintCallable, BlueprintPure) FItemAttachmentData GetAttachmentData();  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEquipSpeedModifier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFocusedMontage(TSoftObjectPtr<UAnimMontage>& FPFocused_Montage, TSoftObjectPtr<UAnimMontage>& TPFocused_Montage, TSoftObjectPtr<UAnimMontage>& Item_Focused_Montage);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void NotifyMeshChanged();
    UFUNCTION(BlueprintImplementableEvent) void OnAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void OnAnim_Focused(AActor* Invoking_Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAnim_Unfocused(AActor* Invoking_Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBlendOut_AC757DAE416C84ADD41FA08FC6C50D49(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_AC757DAE416C84ADD41FA08FC6C50D49(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnDataSet();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnFocused();
    UFUNCTION(BlueprintCallable) void OnInterrupted_AC757DAE416C84ADD41FA08FC6C50D49(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B77E5FE36F(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_B75FF5954D2D861DA51E0E923DB50BFF(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_AC757DAE416C84ADD41FA08FC6C50D49(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_AC757DAE416C84ADD41FA08FC6C50D49(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnUnfocused();
    UFUNCTION(BlueprintCallable) void OwningPlayerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveModifiers();
    UFUNCTION(BlueprintCallable) void Show_Mesh();  // named "Show Mesh"
    UFUNCTION(BlueprintCallable) void TryAttachToOwner(AIcarusItem* ItemActor, AActor* Invoking_Actor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateModifiers();
    UFUNCTION(BlueprintCallable) void UpdatePanini(AIcarusItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ValidateAttachMesh();
};
