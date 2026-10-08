// /Script/Engine.SpringArmComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x280, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/SpringArmComponent.h

UCLASS(Config=Engine)
class USpringArmComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetArmLength;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SocketOffset;  // 0x01FC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetOffset;  // 0x0208, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProbeSize;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECollisionChannel> ProbeChannel;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDoCollisionTest : 1;  // 0x021C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUsePawnControlRotation : 1;  // 0x021C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInheritPitch : 1;  // 0x021C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInheritYaw : 1;  // 0x021C, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInheritRoll : 1;  // 0x021C, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableCameraLag : 1;  // 0x021C, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableCameraRotationLag : 1;  // 0x021C, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseCameraLagSubstepping : 1;  // 0x021C, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDrawDebugLagMarkers : 1;  // 0x021D, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraLagSpeed;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraRotationLagSpeed;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraLagMaxTimeStep;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraLagMaxDistance;  // 0x022C, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bIsCameraFixed;  // 0x0230
    FVector UnfixedCameraPosition;  // 0x0234
    FVector PreviousDesiredLoc;  // 0x0240
    FVector PreviousArmOrigin;  // 0x024C
    FRotator PreviousDesiredRot;  // 0x0258
    FVector RelativeSocketLocation;  // 0x0264, protected
    FQuat RelativeSocketRotation;  // 0x0270, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetTargetRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUnfixedCameraPosition() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCollisionFixApplied() const;  // parameters 0x1

    // Virtual functions that start here:
    //   BlendLocations, GetDesiredRotation, UpdateDesiredArmLocation
};
