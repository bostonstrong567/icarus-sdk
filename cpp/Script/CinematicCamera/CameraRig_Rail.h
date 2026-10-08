// /Script/CinematicCamera.CameraRig_Rail
// Derives from: AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/CinematicCamera/Public/CameraRig_Rail.h

UCLASS(Config=Engine)
class ACameraRig_Rail : public AActor
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float CurrentPositionOnRail;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool bLockOrientationToRail;  // 0x0224, size 0x1
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* TransformComponent;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USplineComponent* RailSplineComponent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* RailCameraMount;  // 0x0238, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) USplineComponent* GetRailSplineComponent();  // parameters 0x8
};
