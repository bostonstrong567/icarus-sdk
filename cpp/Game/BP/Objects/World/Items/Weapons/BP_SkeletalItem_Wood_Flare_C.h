// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C
// Derives from: ABP_SkeletalItem_LightBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x650, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Wood_Flare_C : public ABP_SkeletalItem_LightBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x05E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* FireSettingCapsule;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_TorchFire;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Fill;  // 0x05F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Fire_Loop;  // 0x0600, size 0x8, named "FMOD Fire Loop"
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Hit;  // 0x0608, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AudioParamUpdateHandle;  // 0x0610, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LocLast;  // 0x0618, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator FxFireLastCamRot;  // 0x0624, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DurabilityDelay;  // 0x0630, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Flamey;  // 0x0634, size 0x1, named "Use Flamey"
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Ignite;  // 0x0638, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Douse;  // 0x0640, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinMovement;  // 0x0648, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxMovement;  // 0x064C, size 0x4

    UFUNCTION(BlueprintCallable) void AudioUpdateIntensity();
    UFUNCTION(BlueprintCallable) void DurabilityDamage();
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Wood_Flare(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAttachmentOffset(FTransform& ThirdPersonActorOffset, FTransform& FirstPersonActorOffset, FVector& ThirdPersonComponentOffset);  // parameters 0x6C
    UFUNCTION(BlueprintCallable) void GetComponentToOffset(USceneComponent*& Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetStateChangeAudioOneshot(bool IsLit, UFMODEvent*& OneshotEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetThirdPersonOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LightUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightAudioState(bool IsLit);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopAudioParameterUpdates();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
