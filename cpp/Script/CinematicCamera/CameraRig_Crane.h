// /Script/CinematicCamera.CameraRig_Crane
// Derives from: AActor > UObject
// size 0x250, declared in Engine/Source/Runtime/CinematicCamera/Public/CameraRig_Crane.h

UCLASS(Config=Engine)
class ACameraRig_Crane : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CranePitch;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CraneYaw;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CraneArmLength;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool bLockMountPitch;  // 0x022C, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool bLockMountYaw;  // 0x022D, size 0x1
private:
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* TransformComponent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* CraneYawControl;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* CranePitchControl;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* CraneCameraMount;  // 0x0248, size 0x8
};
