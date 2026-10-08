// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Scanner_Cave_C : public ABP_SkeletalItem_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* LightMaterial;  // 0x05C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayAudioBeep();
    UFUNCTION(BlueprintCallable) void PlayToggleAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateLightMaterial(float Intensity);  // parameters 0x4
};
