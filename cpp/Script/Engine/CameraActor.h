// /Script/Engine.CameraActor
// Derives from: AActor > UObject
// size 0x7B0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraActor.h

UCLASS(Config=Engine)
class ACameraActor : public AActor
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EAutoReceiveInput> AutoActivateForPlayer;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCameraComponent* CameraComponent;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* SceneComponent;  // 0x0230, size 0x8
    UPROPERTY(Deprecated) uint8 bConstrainAspectRatio : 1;  // 0x0240, mask 0x01
    UPROPERTY(Deprecated) float AspectRatio;  // 0x0244, size 0x4
    UPROPERTY(Deprecated) float FOVAngle;  // 0x0248, size 0x4
    UPROPERTY(Deprecated) float PostProcessBlendWeight;  // 0x024C, size 0x4
    UPROPERTY(Deprecated) FPostProcessSettings PostProcessSettings;  // 0x0250, size 0x560

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UCameraAnim,FWeakObjectPtr> PreviewedCameraAnim;  // 0x0238

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAutoActivatePlayerIndex() const;  // parameters 0x4

    // Virtual functions that start here:
    //   NotifyCameraCut
};
