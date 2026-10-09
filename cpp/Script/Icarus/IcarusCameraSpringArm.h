// /Script/Icarus.IcarusCameraSpringArm
// Derives from: USpringArmComponent > USceneComponent > UActorComponent > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Objects/IcarusCameraSpringArm.h

UCLASS(Config=Engine)
class UIcarusCameraSpringArm : public USpringArmComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadWrite) AController* DesiredRotationController;  // 0x02A0, size 0x8
protected:
    UPROPERTY(BlueprintReadOnly) bool bThirdPerson;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ThirdPersonOffset;  // 0x0284, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FirstPersonOffset;  // 0x0290, size 0xC
public:
    UFUNCTION(BlueprintCallable) void ReadRecording();
    UFUNCTION(BlueprintCallable) void SetRotationLock(bool Locked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartRecording();
    UFUNCTION(BlueprintCallable) void StopRecording();
    UFUNCTION(BlueprintCallable) void ToggleCameraMode();
    UFUNCTION(BlueprintCallable) void UpdateArmPosition();
};
