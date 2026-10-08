// /Game/BP/Objects/World/Items/Weapons/BP_SKItem_Sandwyrm_Lamp.BP_SKItem_Sandwyrm_Lamp_C
// Derives from: ABP_SkeletalItem_LightBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SKItem_Sandwyrm_Lamp_C : public ABP_SkeletalItem_LightBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x05E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x05E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Switch;  // 0x05F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SKItem_Sandwyrm_Lamp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAttachmentOffset(FTransform& ThirdPersonActorOffset, FTransform& FirstPersonActorOffset, FVector& ThirdPersonComponentOffset);  // parameters 0x6C
    UFUNCTION(BlueprintCallable) void GetComponentToOffset(USceneComponent*& Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LightUpdated();
    UFUNCTION(BlueprintCallable) void PlaySwitchAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
