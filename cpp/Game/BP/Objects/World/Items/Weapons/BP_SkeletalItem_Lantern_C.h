// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C
// Derives from: ABP_SkeletalItem_LightBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Lantern_C : public ABP_SkeletalItem_LightBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Lantern_Flame;  // 0x05E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Lantern_Loop;  // 0x05F0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanLight(bool& CanLight);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Damage();
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Lantern(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAttachmentOffset(FTransform& ThirdPersonActorOffset, FTransform& FirstPersonActorOffset, FVector& ThirdPersonComponentOffset);  // parameters 0x6C
    UFUNCTION(BlueprintCallable) void GetComponentToOffset(USceneComponent*& Component);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetLightAudioState(bool IsLit);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
