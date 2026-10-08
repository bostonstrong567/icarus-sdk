// /Game/Prototypes/CameraSystem/ICameraInterface.ICameraInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UICameraInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void UpdateCamera(FVector InLocation, FRotator InRotation, float InFOV, bool ForceUpdate, FVector& OutLocation, FRotator& OutRotation, float& OutFOV, bool& Return);  // parameters 0x3D
};
