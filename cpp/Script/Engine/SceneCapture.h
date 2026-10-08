// /Script/Engine.SceneCapture
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/SceneCapture.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class ASceneCapture : public AActor
{
public:
    UPROPERTY(Instanced, Deprecated) UStaticMeshComponent* MeshComp;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* SceneComponent;  // 0x0228, size 0x8
};
