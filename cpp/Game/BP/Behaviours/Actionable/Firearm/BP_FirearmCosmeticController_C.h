// /Game/BP/Behaviours/Actionable/Firearm/BP_FirearmCosmeticController.BP_FirearmCosmeticController_C
// Derives from: UActorComponent > UObject
// size 0x811, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FirearmCosmeticController_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCharging;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentChargePower;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AmmoCount;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Reloading;  // 0x00C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* OwningPlayer;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UFMODAudioComponent*, FFirearmSoundData> PersistentAudioComponents;  // 0x00D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmData FirearmData;  // 0x0120, size 0x690
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnWeaponAnimationStart OnWeaponAnimationStart;  // 0x07B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnWeaponAnimationEnd OnWeaponAnimationEnd;  // 0x07C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnFirstPersonAnimationStart OnFirstPersonAnimationStart;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnFirstPersonAnimationEnd OnFirstPersonAnimationEnd;  // 0x07E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnThirdPersonAnimationStart OnThirdPersonAnimationStart;  // 0x07F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnThirdPersonAnimationEnd OnThirdPersonAnimationEnd;  // 0x0800, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAiming;  // 0x0810, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_FirearmCosmeticController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMontageSection(UAnimMontage* InMontage, FName& Section) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetOwnerMeshComponent(USkeletalMeshComponent*& AsSkeletal_Mesh_Component, bool& Valid);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void LoadAndPlayFirstPersonAnimation(const TSoftObjectPtr<UObject>& FirstPersonAnimationReference, float PlayRateScale, float FixedTime, FName CallbackId, FName ScaleBasedOnSection, float StartPosition);  // parameters 0x44
    UFUNCTION(BlueprintCallable) void LoadAndPlayThirdPersonAnimation(const TSoftObjectPtr<UObject>& ThirdPersonAnimationReference, float PlayRateScale, float FixedTime, FName CallbackId, FName ScaleBasedOnSection, float StartPosition);  // parameters 0x44
    UFUNCTION(BlueprintCallable) void LoadAndPlayWeaponAnimation(const TSoftObjectPtr<UObject>& WeaponAnimationReference, float PlayRateScale, float FixedTime, FName CallbackId, FName ScaleBasedOnSection, float StartPosition);  // parameters 0x44
    UFUNCTION(BlueprintCallable) void OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_C8C3925C475373B80C198BA66441AF28(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_C8C3925C475373B80C198BA66441AF28(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_C93749A8437E973B82F6A6B1DDAF9114(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFirstPersonAnimationEnd__DelegateSignature(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFirstPersonAnimationStart__DelegateSignature(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_C8C3925C475373B80C198BA66441AF28(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_7360B0564CB85F370942C3B80E39A7D0(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_C53A0FD242A9B8B751A78CB687B7525F(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_C8C3925C475373B80C198BA66441AF28(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_C8C3925C475373B80C198BA66441AF28(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnThirdPersonAnimationEnd__DelegateSignature(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnThirdPersonAnimationStart__DelegateSignature(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnWeaponAnimationEnd__DelegateSignature(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnWeaponAnimationStart__DelegateSignature(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayAnimations(TSoftObjectPtr<UObject> MeshAnimationReference, TSoftObjectPtr<UObject> FirstPersonAnimation, TSoftObjectPtr<UObject> ThirdPersonAnimation, float PlayRateScale, float FixedDuration, FName CallbackId, FName ScaleBasedOnMontageSection, float StartPosition);  // parameters 0x94
    UFUNCTION(BlueprintCallable) void PlaySound(const FFirearmSoundData& FirearmSoundData);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void PlayUseWhenBrokenSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartPersistentAudio();
    UFUNCTION(BlueprintCallable) void StopAllAnimations();
    UFUNCTION(BlueprintCallable) void StopPersistentAudio();
    UFUNCTION(BlueprintCallable) void UpdateAudioPerspective();
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudioAim(bool NewIsAiming);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudioAmmo(bool NewReloading, int32 NewAmmoCount);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudioCharge(bool NewIsCharging, float NewChargeStrength);  // parameters 0x8
};
