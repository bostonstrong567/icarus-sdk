// /Script/Icarus.IcarusPlayerCameraManager
// Derives from: APlayerCameraManager > AActor > UObject
// size 0x2820, declared in Icarus/Source/Icarus/Controllers/IcarusPlayerCameraManager.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AIcarusPlayerCameraManager : public APlayerCameraManager
{
public:
    UPROPERTY(Instanced) UAudioListenerCollider* AudioListenerCollider;  // 0x2810, size 0x8

    UFUNCTION() void SetScreenShakeEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateRotationLimits();
};
