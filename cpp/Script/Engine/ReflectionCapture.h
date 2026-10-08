// /Script/Engine.ReflectionCapture
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/ReflectionCapture.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class AReflectionCapture : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UReflectionCaptureComponent* CaptureComponent;  // 0x0220, size 0x8
};
