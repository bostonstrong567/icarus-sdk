// /Script/Engine.CameraShakeBase
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

UCLASS(Abstract, EditInlineNew)
class UCameraShakeBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) bool bSingleInstance;  // 0x0028, size 0x1
    UPROPERTY(Transient, BlueprintReadWrite) float ShakeScale;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Instanced) UCameraShakePattern* RootShakePattern;  // 0x0030, size 0x8
    UPROPERTY(Transient) APlayerCameraManager* CameraManager;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    ECameraShakePlaySpace PlaySpace;  // 0x0040, private
    FMatrix UserPlaySpaceMatrix;  // 0x0050, private
    FCameraShakeState State;  // 0x0090, private

    UFUNCTION(BlueprintCallable, BlueprintPure) UCameraShakePattern* GetRootShakePattern() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRootShakePattern(UCameraShakePattern* InPattern);  // parameters 0x8
};
