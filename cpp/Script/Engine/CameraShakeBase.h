// /Script/Engine.CameraShakeBase
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

UCLASS(Abstract, EditInlineNew)
class UCameraShakeBase : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) bool bSingleInstance;  // 0x0028, size 0x1
    UPROPERTY(Transient, BlueprintReadWrite) float ShakeScale;  // 0x002C, size 0x4
private:
    UPROPERTY(EditAnywhere, Instanced) UCameraShakePattern* RootShakePattern;  // 0x0030, size 0x8
    UPROPERTY(Transient) APlayerCameraManager* CameraManager;  // 0x0038, size 0x8
    ECameraShakePlaySpace PlaySpace;  // 0x0040, not reflected
    FMatrix UserPlaySpaceMatrix;  // 0x0050, not reflected
    FCameraShakeState State;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UCameraShakePattern* GetRootShakePattern() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRootShakePattern(UCameraShakePattern* InPattern);  // parameters 0x8
};
