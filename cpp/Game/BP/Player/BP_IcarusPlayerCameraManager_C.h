// /Game/BP/Player/BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C
// Derives from: AIcarusPlayerCameraManager > APlayerCameraManager > AActor > UObject
// size 0x2828, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Engine)
class ABP_IcarusPlayerCameraManager_C : public AIcarusPlayerCameraManager
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x2820, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);  // parameters 0x25
    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerCameraManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetThirdPerson(bool& ThirdPerson);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateRotationLimits();
};
